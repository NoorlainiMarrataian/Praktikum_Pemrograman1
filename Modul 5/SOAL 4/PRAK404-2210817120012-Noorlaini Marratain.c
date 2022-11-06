#include <stdio.h>

int main()
{
    int p;float a1,a2,b1,b2,b3,b4;
    menu:
    printf("Pilih program\n");
    printf("1.Penjumlahan\n");
    printf("2.Pengurangan\n");
    printf("3.Perkalian\n");
    printf("4.Pembagian\n");
    printf("5.Exit\n");
    printf("Masukkan Pilihan : ");scanf("%d",&p);
    if (p>=1 && p<=4){
            printf("Masukkan nilai pertama : ");scanf("%f",&a1);
            printf("Masukkan nilai kedua : ");scanf("%f",&a2);
            if (p==1){b1=a1+a2;
            printf("Hasil penjumlahan antara %.2f dengan %.2f adalah %.2f\n\n",a1,a2,b1);
            goto menu;}
            else if(p==2) {b1 = a1 - a2;
            printf ("Hasil pengurangan antara %.2f dengan %.2f adalah %.2f\n\n",a1,a2,b2);
            goto menu;}
            else if(p==3) {b3 = a1 * a2;
            printf("Hasil perkalian antara %.2f dengan %.2f adalah %.2f\n\n",a1,a2,b3);
            goto menu;}
            else if(p==4) {b4 = a1/a2;
            printf ("Hasil pembagian antara %.2f dengan %.2f adalah %.2f\n\n",a1,a2,b4);
            goto menu;}}
    else if (p==5) {
            printf("Terima kasih, telah menggunakan kalkulator Noorlaini Marratain\n");}
    else {
    printf("Input anda salah, silahkan coba lagi\n\n");
    goto menu;}
    }
