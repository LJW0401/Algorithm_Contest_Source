n,h=list(map(int,input().split(' ')))
pls=list(map(int,input().split(' ')))
sum=0
for pl in pls:
    if pl<=h:
        sum+=1
    else:
        sum+=2
print(sum)