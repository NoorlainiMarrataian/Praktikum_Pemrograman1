a,b = input().split()
a = int(a) 
b = int(b)
for i in range (1,a+1):
    c=i
    while c >1:
        print("(%d * %d) + "%(c,b), end='');c-=1
    x = 1 ; hasil=(i * b)
    while x<i:
        hasil += ( x * b) ; x+=1
    print("(%d * %d) = %d"%(c,b,hasil))
y=1 ; z=1 ;r = 0
while y<=a:
    r += z * b ; z += y + 1 ; y +=1
print("%d"%(r))