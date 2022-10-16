#include<stdio.h>

int main()
{
    float hA, hB, dA, dB, hdA, hdB;
    hA  = 400000, hB  = 350000;
    dA  = 13, dB  = 21;
    hdA = hA-dA/100 * hA;
    hdB = hB-dB/100 * hB;

    printf("Harga Sepatu A adalah %.0f\n",hA);
    printf("Harga Sepatu B adalah %.0f\n",hB);

    printf("sepatu A mendapat diskon 13 %% sehingga harganya menjadi %.0f\n",hdA);
    printf("sepatu B mendapat diskon 21 %% sehingga harganya menjadi %.0f\n",hdB);
    return 0;
}
