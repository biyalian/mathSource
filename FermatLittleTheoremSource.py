n,k,m = map(int,input().split())
first = 1
second = 1
for i in range(1,n+1):
    first = first * i % m
    if i <= k:
        second = second * i % m
    if i <= n-k:
        second = second * i % m
print(first * pow(second,m-2,m) % m)
