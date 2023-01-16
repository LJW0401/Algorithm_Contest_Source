n=int(input())
a=list(map(int,input().split()))
max=sum(a)-a[0]
for i in range(n):
    for j in range(i,n):
        tmp=sum(a)+sum([1-k for k in a[i:j+1]])-sum([k for k in a[i:j+1]])
        if tmp>max:max=tmp
print(max)