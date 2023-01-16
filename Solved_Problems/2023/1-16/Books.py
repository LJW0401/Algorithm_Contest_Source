n,t=list(map(int,input().split()))
ReadTimes=list(map(int,input().split()))
l=0;r=0
sum=0
res=0
for rti in ReadTimes:
    sum+=rti
    if sum>t:
        sum-=ReadTimes[l]
        l+=1
    r+=1
    if r-l>res:
        res=r-l
print(res)