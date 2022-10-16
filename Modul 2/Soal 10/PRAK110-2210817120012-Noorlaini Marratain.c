#include<stdio.h>

int main()
{
    float sisiA, sisiB, sisiC, k,l,a,t;
    a=5;
    t=12;
    sisiA=t;
    sisiB=sqrt((a*a)+(t*t));
    sisiC=a;
    k=sisiA+sisiB+sisiC;
    l= 0.5*a*t;

    printf("Diketahui :\nAlas = %.f cm\n",a);
    printf("Tinggi = %.f cm\n\n",t);
    printf("Jawab :\n");
    printf("Sisi A = %.f cm\n",sisiA);
    printf("Sisi B = %.f cm\n",sisiB);
    printf("Sisi C = %.f cm\n",sisiC);
    printf("Keliling = %.f cm\n",k);
    printf("Luas = %.f cm\n",l);
    return 0;
}
