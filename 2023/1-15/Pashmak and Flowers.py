input()
b=list(map(int,input().split()))
b.sort()
diff=b[-1]-b[0]
M=b.count(b[-1])
m=b.count(b[0])
if b[-1]>b[0]:
    ways=M*m
else:
    ways=int((m-1)*m/2)

print(diff,ways)