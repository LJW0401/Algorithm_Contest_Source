input()
a=list(map(int,input().split()))
if len(a)==1:
    print('yes\n1 1')
    exit()

l=-1;r=0
for index,[i,j] in enumerate(zip(a[:-1],a[1:]),1):
    if i>j:
        if l<0:
            l=index
        elif l<r:
            print("no")
            exit()
    else:
        if r<l:
            r=index
if r==0 and a[-2]>a[-1]:
    r=len(a)

if l>0 and l<=r:
    if l==1 and r==len(a):
        print(f'yes\n{l} {r}')
    elif l==1 and a[0]<a[r]:
        print(f'yes\n{l} {r}')
    elif r==len(a) and a[l-2] < a[-1]:
        print(f'yes\n{l} {r}')
    elif a[l-2]<a[r-1] and a[l-1]<a[r]:
        print(f'yes\n{l} {r}')
    else:
        print('no')
else:
    print('yes\n1 1')

