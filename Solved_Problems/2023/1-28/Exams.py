ab=[]
for _ in range(int(input())):
    ab.append(list(map(int,input().split())))
ab.sort(key=lambda x:(x[0],x[1]))
res=ab[0][1]
for pair in ab:
    if pair[1]>=res:
        res=pair[1]
    else:
        res=pair[0]
print(res)