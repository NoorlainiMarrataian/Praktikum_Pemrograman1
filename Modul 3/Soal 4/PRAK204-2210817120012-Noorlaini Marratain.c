#include <stdio.h>

int main()
{
    for (int i=0; i<=1; i++){
    float r, t, v, k, l;

    scanf("%f", &r);
    scanf("%f", &t);
    v=22*r*r*t/7;
    l=2*22*r*(r+t)/7;
    k=2*22*r/7;
    printf("Volume = %.2f \n",v);
    printf("Luas = %.2f \n",l);
    printf("Keliling = %.2f \n\n",k);
    }
}
