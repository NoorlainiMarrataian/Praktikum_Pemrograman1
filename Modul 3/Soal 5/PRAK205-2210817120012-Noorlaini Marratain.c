#include <stdio.h>

 int main()
 {
     for (int i=0; i<=1; i++){
     int A, B, C, k, l;
     scanf("%d", &A);
     scanf("%d", &B);
     C=sqrt(pow(B,2)-(pow(A,2)));
     k=A+B+C;
     l=0.5*C*A;
     printf("Alas = %d cm\n", C);
     printf("Tinggi = %d cm\n", A);
     printf("Keliling = %d cm\n", k);
     printf("Luas = %d cm^2\n\n",l);
     }
 }

