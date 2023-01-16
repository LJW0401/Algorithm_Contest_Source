import bisect
n=int(input())
a=list(map(int,input().split()))
m=int(input())
q=list(map(int,input().split()))
indexs=[]
for i,ai in enumerate(a):
    indexs+=[i+1]*ai
for i in q:
    print(indexs[i-1])