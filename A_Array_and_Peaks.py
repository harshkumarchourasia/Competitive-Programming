t = int(input())
while t:
    t-=1
    n,k = map(int,input().split())
    if k>(n-1)//2:
        print(-1)
    else:
        lo = 1
        hi = n
        while k:
            k-=1
            print(lo, hi, end = " ")
            lo+=1
            hi-=1
        for i in range(lo,hi+1):
            print(i,end = " ")
        print()