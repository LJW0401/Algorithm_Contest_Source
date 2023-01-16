t=int(input())
for _ in range(t):
    n,k=list(map(int,input().split(' ')))
    if (1+1+(k-1)*2)*k/2>n:
        print("NO")
        continue

    if (n-k+1)%2 == 1:
        print("YES")
    else:
        print("NO")