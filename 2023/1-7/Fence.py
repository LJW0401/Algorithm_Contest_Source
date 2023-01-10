n,k=list(map(int,input().split(' ')))
heights=list(map(int,input().split(' ')))
Sum=sum(heights[:k])
rSum=Sum
res=1
for i in range(k,len(heights)):
    Sum=Sum-heights[i-k]+heights[i]
    if rSum>Sum:
        rSum=Sum
        res=i-k+2
print(res)