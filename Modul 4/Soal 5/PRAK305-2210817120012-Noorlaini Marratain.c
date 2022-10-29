#include <stdio.h>

int main()
{
    int d,h,s,hk,m;
    scanf("%d", &hk);
    d=hk/84600;
    h=(hk/3600)%24;
    m=(hk/60)%60;
    s=hk%60;
    if(hk<=3600){
        printf("%.2d:%.2d:%.2d\n",h,m,s);}
    else if(hk>3600 && hk<84600){
        printf("%.2d:%.2d:%.2d\n",h,m,s);}
    else if(hk>=84600){
        printf("%d hari %.2d:%.2d:%.2d\n",d,h,m,s);}
}

