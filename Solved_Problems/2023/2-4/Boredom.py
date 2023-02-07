n=int(input())
a=list(map(int,input().split()))
d=[0]*100001
for x in a:
    d[x]+=x#把每一种数字的总和加起来
dp=[0]*100003
for i,di in enumerate(d,2):
    dp[i]=max(dp[i-1],dp[i-2]+di)#重点在于找到状态转移方程
print(dp[-1])
