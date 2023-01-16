n,m=list(map(int,input().split()))
if m<=n:
    cnt=n-m
else:
    cnt=0
    while m>n:
        cnt+=(m%2==1)
        m=(m+1)//2
        cnt+=1
    cnt+=(n-m)
print(cnt)