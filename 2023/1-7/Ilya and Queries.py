s=input()
num=[0]
for i in range(len(s)-1):
    num.append(num[i]+(s[i]==s[i+1]))
for _ in range(int(input())):
    l,r=list(map(int,input().split(' ')))
    print(num[r-1]-num[l-1])