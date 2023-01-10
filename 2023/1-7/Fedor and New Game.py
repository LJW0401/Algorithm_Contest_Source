n, m, k=list(map(int,input().split(' ')))
x=[int(input()) for _ in range(m+1)]
print(sum([bin(x[m]^y).count('1')<=k for y in x])-1)