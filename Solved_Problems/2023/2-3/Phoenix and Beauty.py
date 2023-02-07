#本题的难点在于如何判断是否可行，借助了大佬的研究，只要 元素种类数>k 时不可能形成需求的序列
for _ in range(int(input())):
    n,k=list(map(int,input().split()))
    a=input().split()
    T=list(set(a))
    EliCnt=len(T)
    
    i=1
    while len(T)<k:
        if str(i) not in T:
            T.append(str(i))
        i+=1

    if EliCnt>k:
        print(-1)
    else:
        b=T*n
        print(len(b))
        print(' '.join(b))