import bisect
#the most right is setted 0
for _ in range(int(input())):
    n,k=list(map(int,input().split()))
    pos=0
    i=1
    while pos<k:
        pos+=i
        i+=1
    l=i-1
    r=k-(pos-(i-2))

    res=['a']*n
    res[l]='b'
    res[r]='b'
    print(''.join(res[::-1]))