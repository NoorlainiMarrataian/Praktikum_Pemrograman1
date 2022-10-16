#include<stdio.h>

int main()
{
    int x, y, z, kT, hT, hP;
    x=4, y=5, z=7;
    kT=x+y+z;
    hT=85000;
    hP=kT*hT;

    printf("Diketahui: \nPanjang sisi segitiga berturut-turut adalah %d,%d, dan %d\n",x,y,z);
    printf("Keliling Tanah Pak Dengklek adalah %d\n",kT);
    printf("Harga tanah per meter adalah %d\n",hT);
    printf("Jawaban : \nBiaya yang diperlukan Pak Dengklek adalah : Rp%d\n",hP);
    return 0;
}
