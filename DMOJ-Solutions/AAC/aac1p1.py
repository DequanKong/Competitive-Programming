# https://dmoj.ca/problem/aac1p1
import sys
a = input()
a = a.split()
if int(a[0])**2 > (int(a[1])**2)*math.pi:
    print("SQUARE")
else:
    print("CIRCLE")
