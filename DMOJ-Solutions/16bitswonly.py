# https://dmoj.ca/problem/16bitswonly
n = int(input())
a = []
for i in range(n):
    a.append(input().split())
for i in range(len(a)):
    if int(a[i][0]) * int(a[i][1]) == int(a[i][2]):
        print("POSSIBLE DOUBLE SIGMA")
    else:
        print("16 BIT S/W ONLY")
