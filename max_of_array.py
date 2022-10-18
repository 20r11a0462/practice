n = int(input())
ar = list(map(int,input().split()))
ans = ar[0]
for i in range(1,n):
     ans = max(ans , ar[i])
print (ans)  
