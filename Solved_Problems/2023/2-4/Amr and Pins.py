import math
r,x1,y1,x2,y2=list(map(int,input().split()))
d=math.sqrt((x1-x2)**2+(y1-y2)**2)
res=int(d/(2*r))
if d%r>0:
    res+=1
elif r==1 and res*r*2<d:
    res+=1
print(res)