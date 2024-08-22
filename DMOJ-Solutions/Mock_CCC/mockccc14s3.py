# https://dmoj.ca/problem/mockccc14s3
def merge_sort(arr, col):
    if len(arr) <= 1:
        return arr
    
    mid = len(arr) // 2
    left = arr[:mid]
    right = arr[mid:]
    
    left = merge_sort(left, col)
    right = merge_sort(right, col)
    
    result = []
    i = j = 0
    while i < len(left) and j < len(right):
        if left[i][col] <= right[j][col]:
            result.append(left[i])
            i += 1
        else:
            result.append(right[j])
            j += 1
    
    result.extend(left[i:])
    result.extend(right[j:])
    
    return result

def main():
    n, m = map(int, input().split())
    spreadsheet = [list(map(int, input().split())) for _ in range(n)]
    
    num_commands = int(input())
    for _ in range(num_commands):
        col_to_sort = int(input())
        spreadsheet = merge_sort(spreadsheet, col_to_sort - 1)
    
    for row in spreadsheet:
        print(" ".join(map(str, row)))

if __name__ == "__main__":
    main()
