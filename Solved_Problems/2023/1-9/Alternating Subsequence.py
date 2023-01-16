t=int(input())
for _ in range(t):
    input()
    a=list(map(int,input().split()))
    b=a[0]
    sum=0
    for i in a:
        if i//b<0:
            sum+=b
            b=i
        if i>b:
            b=i
    print(sum+b)