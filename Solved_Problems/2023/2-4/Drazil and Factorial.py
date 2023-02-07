numF={
    0:[],  1:[],      2:[2], 3:[2,3],     4:[2,3,2,2],
    5:[5], 6:[5,2,3], 7:[7], 8:[7,2,2,2], 9:[7,2,2,2,3,3]
}

n=int(input())
NumStr=input()
numbs=[]
for str_ in NumStr:
    numbs+=numF[int(str_)]

n7=numbs.count(7)
n5=numbs.count(5)
n3=numbs.count(3)
n2=numbs.count(2)-n3
print('7'*n7+'5'*n5+'3'*n3+'2'*n2)