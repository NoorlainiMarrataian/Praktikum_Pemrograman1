#include <stdio.h>

int main()
{
        int matriksA[10][10], matriksB[10][10], matriksAXB[10][10];
        int x, y, a, b, jumlah=0;
        scanf("%d", &b);
        printf("Matriks A\n");
        for(x=0; x<b; x++){
            for(y=0; y<b; y++){
                scanf("%d", &matriksA[x][y]);
            }
        }
        printf("Matriks B\n");
        for(x=0; x<b; x++){
            for(y=0; y<b; y++){
                scanf("%d", &matriksB[x][y]);
            }
        }
        for(x=0; x<b; x++){
            for(y=0; y<b; y++){
                for(a=0; a<b; a++){
                jumlah = jumlah + matriksA[x][a]*matriksB[a][y];
            }
            matriksAXB[x][y] = jumlah;
            jumlah=0;
        }
    }
    printf("Matriks AXB\n");
    for(x=0; x<b; x++){
        for(y=0; y<b; y++){
            printf("%d ", matriksAXB[x][y]);
        }
        printf("\n");
    }
    return 0;
}
