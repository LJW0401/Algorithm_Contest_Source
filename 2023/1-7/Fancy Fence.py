t=int(input())
for _ in range(t):
    rec=int(input())
    if 360%(180-rec)==0:
        print("YES")
    else:
        print("NO")

# (180-rec)*i==360
# i=360/(180-rec)
# ->
# 360%(180-rec)==0