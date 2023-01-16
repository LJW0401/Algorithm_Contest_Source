n,a,b,c=list(map(int,input().split()))
delta=sorted([a,b,c])
dp=[0]*(max(n,a,b,c)+1)
dp[a]=1;dp[b]=1;dp[c]=1
for i in range(min(delta),len(dp)):
    t0=dp[i-delta[0]] if i-delta[0]>=min(delta) and dp[i-delta[0]]>0 else 0
    t1=dp[i-delta[1]] if i-delta[1]>=min(delta) and dp[i-delta[1]]>0 else 0
    t2=dp[i-delta[2]] if i-delta[2]>=min(delta) and dp[i-delta[2]]>0 else 0
    dp[i]=max(t0,t1,t2)+1 if max(t0,t1,t2)>0 else dp[i]

print(dp[n])