n,a,b,c=list(map(int,input().split()))
# delta=sorted([a,b,c])
d=dict()
d[a]=1;d[b]=1;d[c]=1
while n not in d:
    for i in d.copy():
        if i+a not in d:
            d[i+a]=d[i]+1
        if i+b not in d:
            d[i+b]=d[i]+1
        if i+b not in d:
            d[i+b]=d[i]+1

print(d[n])