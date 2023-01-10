n,m=list(map(int,input().split(' ')))
a=list(map(int,input().split(' ')))
a.reverse()
b=set()
n=[]
for i in a:
    b.add(i)
    n.append(len(b))
n.reverse()
# print(n)

for _ in range(m):
    l=int(input())
    print(n[l-1])