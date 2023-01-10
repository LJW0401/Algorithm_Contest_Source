n,x=list(map(int,input().split()))
sum=0
i=1
while i*i<=x and i*2<=n+1:
    if(x%i==0 and x/i<=n):
        if(i*i==x):
            sum+=1
        else:
            sum+=2
    i+=1
print(sum)