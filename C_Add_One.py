t = int(input())
import collections
d = collections.defaultdict(int)
for num in range(10):
    d[(num,1)] = str(num+1)

for i in range(2,200001):
    for num in range(10):
        d[(num,i)] = ''
        for j in d[(num,i-1)]:
            d[(num,i)]+=d[(int(j),1)]
mod = 10**9+7
while t:
    t-=1
    n,m = map(int,input().split())
    res = 0
    for i in str(n):
        res+=len(d[int(i),m])
    print(res)