number=input()
res=[]
for i in number:
    if 5<=int(i):
        res.append(9-int(i))
    else:
        res.append(int(i))
if res[0]==0:
    res[0]=9
print(''.join(list(map(str,res))))