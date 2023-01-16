input()
a=list(map(int,input().split()))
d={0:[],1:[]}
for i,ai in enumerate(a,1):
    d[ai%2].append(i)
print(d[0][0] if len(d[0])==1 else d[1][0])
