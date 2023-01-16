n,m,a=list(map(int,input().split(' ')))

x = n//a if n%a==0 else n//a+1
y = m//a if m%a==0 else m//a+1

print(x*y)