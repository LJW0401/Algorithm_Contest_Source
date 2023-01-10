s=input()
# flag=False
flag=True
for ch in 'hello':
    if ch in s:
        s=s[s.find(ch)+1:]
        # if ch=='o':
        #     flag=True
    else:
        flag=False
if flag:
    print('YES')
else:
    print('NO')

