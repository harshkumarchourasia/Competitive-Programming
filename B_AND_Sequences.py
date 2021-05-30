t = int(input())
def fact(n):
    ans = 1
    for i in range(1,n+1):
        ans*=i
        ans%=(10**9+7)
    return ans
while t:
    t-=1
    n = int(input())
    arr = list(map(int,input().split()))
    arr.sort()
    if arr[0]!=arr[1]:
        print(0)
    else:
        x = arr[0]
        cnt = 0
        temp = True
        for i in arr:
            if x!=(x&i):
                temp = False
            if x==i:
                cnt+=1
        if not temp:
            print(0)
        else:
            print((cnt*(cnt-1)*fact(n-2))%(10**9+7))