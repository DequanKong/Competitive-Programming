# https://dmoj.ca/problem/ccc00j1
a = input().split()
day = int(a[0])
monthDays = int(a[1])
#Sun Mon Tue Wed Thr Fri Sat
#          1   2   3   4   5
#  6   7   8   9  10  11  12
# 13  14  15  16  17  18  19
# 20  21  22  23  24  25  26
# 27  28  29  30
print("Sun Mon Tue Wed Thr Fri Sat")

print(" "*(4*(day-1)+2)+"1", end = "")

for i in range(2,monthDays+1,1):
    if day == 7:
        day = 1
        print()
        if i >= 10:
            print(" "+str(i), end = "")
        else:
            print(" "*2+str(i), end = "")
    else:
        if i >= 10:
            print(" "*2+str(i), end = "")
        else:
            print(" "*3+str(i), end = "")
        day+=1
    if i == monthDays:
        print()
