string=input()
pos1=string.find('AB')
pos2=string.find('BA')
if pos1>=0 and pos2>=0:
    if abs(pos1-pos2)>1:
        print('YES')
    else:
        substr1=string[:min(pos1,pos2)]
        substr2=string[max(pos1,pos2)+2:]
        if substr1.find('AB')>=0 or substr1.find('BA')>=0 or substr2.find('AB')>=0 or substr2.find('BA')>=0:
            print('YES')
        else:
            print('NO')
else:
    print('NO')