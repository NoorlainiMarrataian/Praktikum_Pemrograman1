def reverse (n) : 
    rev = n[::-1]
    return rev
A,B = input().split()
A = reverse (A)
B = reverse (B)
C = str(int(A)+int(B))
print(int(reverse(C)))