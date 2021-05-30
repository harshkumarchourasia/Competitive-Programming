import sys
input = sys.stdin.readline
from math import gcd
n = int(input())
arr = [i for i in range(1, n) if gcd(i, n) == 1]
pdt = 1
for i in arr:
    pdt = (pdt*i)%n

if pdt==1:
    print(len(arr))
    print(*arr)
else:
    print(len(arr)-1)
    print(*[i for i in arr if i!=pdt])
