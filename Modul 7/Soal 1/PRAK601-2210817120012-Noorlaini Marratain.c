#include <stdio.h>

int main()
{
    int b, k, isi;
    scanf("%d %d", &b, &k);
    int angka[b][k];
    for(int i=0; i<b; i++){
        for(int j=0; j<k; j++){
            scanf("%d", &isi);
            angka[i][j] = isi;
        }
    }
    printf("\n");
    for(int i=0; i<b; i++){
        for(int j=0; j<k; j++){
            printf("%d ", angka[i][j]);
        }
        printf("\n");
    }
    return 0;
}
