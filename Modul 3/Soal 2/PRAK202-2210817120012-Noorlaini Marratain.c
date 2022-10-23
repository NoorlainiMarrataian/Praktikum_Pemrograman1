#include <stdio.h>

int main()
{
    for (int i=0; i<=1; i++){
    float np,nk,hasil;
    printf("Masukkan Nilai Pertama: ");
    scanf("%g", &np);
    printf("Masukkan Nilai Kedua: ");
    scanf("%g", &nk);
    hasil=np+nk;
    printf("Hasil dari penjumlahan nilai pertama \"%g\" dan nilai kedua \"%g\" adalah \"%g\"\n\n", np, nk, hasil);
}
}
