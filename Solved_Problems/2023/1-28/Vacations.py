n=int(input())
a=list(map(int,input().split()))
dos=[-1]
f=True
for i,ai in enumerate(a):
    if ai==0:
        dos.append(0)
    else:
        if dos[-1]==0:
            if ai==1:
                dos.append(1)
                f=False
            elif ai==2:
                dos.append(2)
                f=False
            elif ai==3:
                f=True
                dos.append(1) 
        elif dos[-1]!=0:
            if dos[-1]==ai:
                if f:
                    if ai==3:
                        dos.append(3-dos[-1])
                    else:
                        dos.append(ai)
                else:
                    dos.append(0)
            else:
                if ai==3:
                    dos.append(3-dos[-1])
                else:
                    dos.append(ai)
            if f and ai==3:
                f=True
            else:
                f=False

print(dos.count(0))