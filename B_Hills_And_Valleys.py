
import sys
input = sys.stdin.readline
def isValley(i,arr):
    n = len(arr)
    return i>0 and i<n-1 and arr[i]<arr[i-1] and arr[i]<arr[i+1]
def isHill(i,arr):
    n = len(arr)
    return i>0 and i<n-1 and arr[i]>arr[i-1] and arr[i]>arr[i+1]

for i in range(int(input())):
    n = int(input())
    arr = list(map(int,input().split()))
    Is = [0]*n
    s = 0
    for i in range(1,n-1):
        if isHill(i,arr) or isValley(i,arr):
            Is[i] = 1
            s+=1
    res = s
    for i in range(1,n-1):
        temp = arr[i]
        arr[i] = arr[i-1]
        res = min(res, s-Is[i-1]-Is[i]-Is[i+1]+
        isValley(i-1,arr)+isValley(i,arr)+isValley(i+1,arr)+
        isHill(i-1,arr)+isHill(i,arr)+isHill(i+1,arr))
        arr[i] = arr[i+1]
        res = min(res, s-Is[i-1]-Is[i]-Is[i+1]+
        isValley(i-1,arr)+isValley(i,arr)+isValley(i+1,arr)+
        isHill(i-1,arr)+isHill(i,arr)+isHill(i+1,arr))
        arr[i] = temp

    print(res)

