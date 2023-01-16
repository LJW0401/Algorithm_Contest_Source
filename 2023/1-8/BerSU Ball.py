import bisect
n=int(input())
a=list(map(int,input().split()))
m=int(input())
b=list(map(int,input().split()))

a.sort()
b.sort()
i=0;j=0
res=0
while i<n and j<m:
    if abs(a[i]-b[j])<=1:
        res+=1
        i+=1;j+=1
    elif a[i]>b[j]:
        j+=1
    else:
        i+=1

print(res)