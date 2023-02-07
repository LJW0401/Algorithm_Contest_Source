for _ in range(int(input())):
    n=int(input())
    if n>=1100:
        print('YES')
    else:
        a=n//11
        b=n%11
        if b==0:
            print('YES')
        elif a>=10 and b*10<=a:
            print('YES')
        else:
            print('NO')