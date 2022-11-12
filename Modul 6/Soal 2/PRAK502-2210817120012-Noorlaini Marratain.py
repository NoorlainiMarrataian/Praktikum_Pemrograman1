def hitung(nilai1,nilai2):
    return nilai1-nilai2
def mutlak(angka):
    return abs (angka)

a1,a2,b1,b2 = input().split()
a1,a2,b1,b2 = map(int,(a1,a2,b1,b2))
Hasil = hitung(a1,b1)+hitung(a2,b2)
print(mutlak(Hasil))