a = int(input())
b = list(map(int, input().split()))
c = sorted(b)
d = 0
g = 0
q = 0
for i in range(a):
    if b[i] != c[i]:
        d = b[i]
        g = i
        q = b.index(c[i])
        break

if b[0:g] + b[g:q+1][::-1] + b[q+1:] == c:
 
    print('yes')
    print(g+1, q+1)
else:
    print('no')