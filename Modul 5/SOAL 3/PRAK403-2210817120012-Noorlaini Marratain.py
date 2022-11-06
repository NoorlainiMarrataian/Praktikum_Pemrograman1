x,y=input().split()
x=int(x) 
y=int(y)
a=x 
b=y
while a>=y and b<=x:
    print("%d %d"%(a,b), end='')
    if a==y : break
    else : print(" - ", end='')
    a-=1;b+=1
else:
    a=x
    b=y
    while a<=y and b>=x:
        print("%d %d"%(a,b), end='')
        if a == y : break
        else : print(" - ", end='')
        a+=1;b-=1
