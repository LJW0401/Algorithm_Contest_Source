m,s=list(map(int,input().split()))
if (m>1 and s==0) or s>m*9:
    print('-1 -1')
    exit()

max='9'*(s//9)+str(s%9)*(s%9!=0)+'0'*(m-s//9-(s%9!=0))


min_list=['0']*m
chg_num=s//9
for i,ai in enumerate(min_list[:chg_num]):
    min_list[i]='9'
if chg_num<m-1:
    if s%9==0:
        min_list[chg_num-1]=str(int(min_list[chg_num-1])-1)
        min_list[-1]='1'
    else:
        min_list[chg_num]=str((s-1)%9)
        min_list[-1]='1'
elif chg_num==m-1 and s%9!=0:
    min_list[-1]=str(s%9)
min=''.join(min_list[::-1])


print(min,max)