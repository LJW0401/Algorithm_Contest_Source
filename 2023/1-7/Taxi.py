n=int(input())
s=list(map(int,input().split(' ')))
s.sort(reverse=True)
res=0

while len(s)>0 and s[0]==4:
    s.pop(0)
    res+=1

while len(s)>0:
    while len(s)>1 and s[0]+s[-1]<=4:
        s[0]=s[0]+s[-1]
        s.pop(-1)
    s.pop(0)
    res+=1
    
print(res)
