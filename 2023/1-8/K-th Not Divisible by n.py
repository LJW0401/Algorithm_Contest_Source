t=int(input())
for _ in range(t):
    n,k=list(map(int,input().split()))
    res=k
    while res-res//n<k:
        res=k+res//n
    print(res)