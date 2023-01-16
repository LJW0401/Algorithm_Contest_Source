d=dict()
for _ in range(int(input())):
    name=input()
    if name in d:
        d[name]+=1
        print(f'{name}{d[name]}')
    else:
        d[name]=0
        print('OK')