n,m=list(map(int,input().split()))
kmax=(n-m)*(n-m+1)//2
kmin=(m-n%m)*((n//m)*(n//m-1)//2)+(n%m)*((n//m+1)*(n//m)//2)

print(kmin,kmax)