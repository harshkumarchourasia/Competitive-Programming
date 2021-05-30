p=10**9+7
def power(n,k,p):
	res = 1
	for _ in range(k):
		res = (res*n)%p
	return res
for _ in range(int(input())):
	n,k = map(int,input().split())
	print(power(n,k,p))