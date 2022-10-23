#include <stdio.h>

int main()
{
    for (int i=0; i<=1; i++){
    float a,b,i,j,x,y, hasil;
    scanf("%f %f", &a,&b);
    scanf("%f %f", &i,&j);
    scanf("%f %f", &x,&y);
    hasil =(a-b)*i/j-(x+y);
    printf("%.3f\n\n",hasil);
    }
}
