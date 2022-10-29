c=int(input())
if c>=1 and c<=9:
    print("Satuan\n")
elif(c>=11 and c<=19):
    print("Belasan\n")
elif(c>=20 and c<=99):
    print("Puluhan\n")
elif(c<=0):
    print("nol\n")
else:
    print("Anda Menginput Melebihi Limit Bilangan\n")