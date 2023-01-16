for _ in range(int(input())):
    n=int(input())
    if n<24:
        print("NO")
        continue
    i=2;j=0
    a=['YES']
    while j<2 and i*i<n:
        if n%i==0:
            a+=[i]
            n//=i
            j+=1
        i+=1
    print(*[a+[n],['NO']][j<2])