from ast import Break


hk=int(input())
d=int(hk/84600)
h=int((hk/3600)%24)
m=int((hk/60)%60)
s=int(hk%60)
if(hk<=3600):
    print("%.2d:%.2d:%.2d\n" % (h,m,s))
elif(hk>=3600 and hk<84600):
    print("%.2d:%.2d:%.2d\n" % (h,m,s))
elif(hk>=84600):
    print("%d hari %.2d:%.2d:%.2d\n" % (d,h,m,s))
if (hk>4) :
    Break