b, k, = map(int, input().split())
angka = []
a = 0
isi = list(map(int, input().split()))
print()
for i in range(b):
    angka.append(isi[a : a + k])
    a += k
for b in angka:
    for isi in b:
        print(isi, end=' ')
    print()
print()