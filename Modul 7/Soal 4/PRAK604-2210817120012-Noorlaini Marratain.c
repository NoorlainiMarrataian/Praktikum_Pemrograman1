#include <stdio.h>
#include <string.h>

int main()
{
    char asli[100];
    char palsu[100];
    scanf("%[^\n]%*c", &asli);
    scanf("%[^\n]%*c", &palsu);
    int len1, len2, x, a=0, b=0;
    len1 = strlen(asli);
    len2 = strlen(palsu);
    if(len1 != len2){
        printf("Panjang kalimat berbeda, pesan palsu");}
    else{
        for(x=0; x<len1; x++){
            if(asli[x]==palsu[x]){
                if(asli[x]== ' '){
                    printf(" ");}
            else{
                printf("*");
                a++;}
            }
        else{
            printf("#");
            b++;}
        }
        printf("\n* = %d", a);
        printf("\n# = %d", b);
    }
    if(a>b){
        printf("\nPesan Asli");}
    else if(a<b){
        printf("\nPesan Palsu");}
    return 0;
}

