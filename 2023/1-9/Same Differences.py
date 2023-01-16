for _ in range(int(input())):
    n=int(input())
    a=list(map(int,input().split()))
    res=0
    d=dict({});i=r=0
    for x in a:
        k=x-i
        if k not in d:
            d[k]=0
        v=d[k]
        r+=v
        d[k]=v+1
        i+=1

    print(r)