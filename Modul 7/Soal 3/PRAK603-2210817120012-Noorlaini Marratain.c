#include <stdio.h>

int main()
{
    int b1, b2, isi;
    scanf("%d %d", &b1, &b2);
    int angka1[b1], angka2[b2];
    if(b1 != b2){
        printf("Jumlah tidak sama");
    }else{
        for(int i=0; i<b1; i++){
            scanf("%d", &isi);
            angka1[i]=isi;
        }
        for(int i=0; i<b2; i++){
            scanf("%d", &isi);
            angka2[i]=isi;
    }
    printf("\n");
    for(int i=0; i<b2; i++){
        printf("%d ", angka1[i]*angka2[i]);
        }
    }
return 0;
}
