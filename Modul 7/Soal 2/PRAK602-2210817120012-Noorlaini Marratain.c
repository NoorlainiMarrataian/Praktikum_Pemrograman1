#include <stdio.h>

int main()
{
    int b, isi;
    scanf("%d", &b);
    int angka[b];
    for(int i=0; i<b; i++){
        scanf("%d", &isi);
        angka[i]=isi;
    }
    printf("\n");
    for(int i=0; i<b; i++){
        printf("%d ", angka[i]*(i+1));
    }
return 0;
}
