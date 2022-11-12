#include<stdio.h>

void Biodata(int tahunLahir, char *Namaku, char *Asal){
    int tahun_Sekarang = 2020;
    printf("\nPerkenalkan Nama Saya : %s\n", Namaku);
    printf("Umur Saya : %d\n", tahun_Sekarang - tahunLahir);
    printf("Saya adalah Angkatan : %d\n", tahun_Sekarang);
    printf("Asal Saya dari : %s", Asal);
}
int main(){
    int tahunLahir;
    char Namaku[20], Asal [15];
    scanf("%d", &tahunLahir);
    scanf(" %[^\n]%*c", &Namaku);
    scanf(" %[^\n]%*c", &Asal);
    Biodata(tahunLahir, Namaku, Asal);
    return 0;
}
