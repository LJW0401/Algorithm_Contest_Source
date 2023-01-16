for _ in range(int(input())):
    n,k=list(map(int,input().split()))
    res=n
    for i in range(1,int(n**0.5)+1):
        if n%i==0:
            if n//i<=k:
                res=min(res,i)
            if i<=k:
                res=min(res,n//i)
    print(res)