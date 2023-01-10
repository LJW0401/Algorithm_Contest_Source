s=input()
f=False
for i in 'HQ9':
    if i in s:
        f=True
        break
print('YES' if f else 'NO')