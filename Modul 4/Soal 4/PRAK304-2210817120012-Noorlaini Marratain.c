#include <stdio.h>

int main()
{
    int c;
    scanf("%d", &c);
    if(c>=1 && c<=9){
        printf("Satuan\n");}
    else if(c>=10 && c<=19){
        printf("Belasan\n");}
    else if(c>=20 && c<=99){
        printf("Puluhan\n");}
    else if (c<1){
        printf("nol\n");}
    else {
        printf("Anda Menginput Melebihi Limit Bilangan\n");}
}
