n, m, a, b =list(map(int,input().split(' ')))
if b/m>a:
    print(n*a)
else:
    Sum=n//m*b
    Sum+=(n%m)*a if (n%m)*a<b else b
    print(Sum)