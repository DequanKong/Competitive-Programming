n = int(input())
for i in range(1, n + 1):
    line = input().split(maxsplit=1)
    M = int(line[0])
    str = line[1]
    out = str[:M-1] + str[M:]
    print(i,out)