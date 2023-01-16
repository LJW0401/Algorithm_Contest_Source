n=int(input())
laptops=[]
for _ in range(n):
    laptops.append(list(map(int,input().split(' '))))
if sorted(laptops,key=lambda x:x[0])==sorted(laptops,key=lambda x:x[1]):
    print("Poor Alex")
else:
    print("Happy Alex")