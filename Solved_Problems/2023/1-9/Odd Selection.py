for _ in range(int(input())):
    n,x=list(map(int,input().split()))
    a=list(map(int,input().split()))
    even_num=len(list(filter(lambda x:1-x%2,a)))
    odd_num=n-even_num
    if odd_num==0:print("NO");continue
    odd_need =odd_num-1+odd_num%2 if odd_num<=x else x-1+x%2
    even_need=x-odd_need
    if even_need>even_num:
        print("NO")
    else:
        print("YES")
