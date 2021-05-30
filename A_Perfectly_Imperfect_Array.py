import sys
input = sys.stdin.readline
perfect_square = [0]*10001
for i in range(101):
    perfect_square[i**2] = 1
for _ in range(int(input())):
    n = int(input())
    arr = list(map(int,input().split()))
    cnt = 0
    for i in arr:
        if perfect_square[i]==1:
            cnt+=1
    if cnt==n:
        print("NO")
    else:
        print("YES")
