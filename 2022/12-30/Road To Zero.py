t=int(input())
for _ in range(t):
    x,y=list(map(int,input().split(' ')))
    a,b=list(map(int,input().split(' ')))
    min=x if x<y else y
    sum=0
    if a*2>=b:
        sum+=min*b
        x-=min;y-=min
    else:
        sum+=min*a*2
        x-=min;y-=min
    sum = sum + x*a + y*a
    print(sum)
    