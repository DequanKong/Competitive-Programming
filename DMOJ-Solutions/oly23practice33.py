# https://dmoj.ca/problem/oly23practice33
def factorial(n):
    if n == 0 or n == 1:
        return 1
    return n * factorial(n - 1)

def permutation_index(perm):
    n = len(perm)
    index = 0
    for i in range(n):
        smaller = sum(1 for j in range(i + 1, n) if perm[j] < perm[i])
        index += smaller * factorial(n - i - 1)
    return index

# Read input
n = int(input())
perm1 = list(map(int, input().split()))
perm2 = list(map(int, input().split()))

# Calculate the permutation indices
index1 = permutation_index(perm1)
index2 = permutation_index(perm2)

# Calculate and print the absolute difference of indices
result = abs(index1 - index2)
print(result)
