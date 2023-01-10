n=int(input())
x=''
cnt=0
for i in range(n):
    y=input()
    if y!=x:
        cnt+=1
    x=y
print(cnt)