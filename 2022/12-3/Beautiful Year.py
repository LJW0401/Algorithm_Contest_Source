s=input()
flag=False
while not flag:
    s=str(int(s)+1)
    for i in s:
        if i not in s[s.find(i)+1:]:
            flag=True
        else:
            flag=False
            break
print(s)