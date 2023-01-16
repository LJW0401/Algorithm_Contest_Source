n=int(input())
cnt=0
for i in range(n):
    tmp=list(map(int,input().split()))
    if tmp[1]-tmp[0]>=2:
        cnt+=1
print(cnt)