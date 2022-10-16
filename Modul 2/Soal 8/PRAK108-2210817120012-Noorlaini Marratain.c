#include<stdio.h>

int main()
{
    float P, jT, phi, r;
    P  =5;
    jT =14;
    phi=3.14;
    r  = (jT/P)*0.5/phi;

    printf("Diketahui :\nPak Dengklek mengelilingi taman = %.0f Putaran\n",P);
    printf("Jarak tempuh Pak Dengklek = %.0f Kilometer\n",jT);
    printf("\nJawaban :\n");
    printf("Jari-jari taman yang dikelilingi Pak Dengklek adalah %.2f Kilometer\n",r);
    return 0;
}
