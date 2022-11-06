#include <stdio.h>

int main(){
    int a,b,c,d,x,y,z,hasil,r;
    scanf("%d %d", &a, &b);
    for (c = 1; c <=a; c++){
            for ( d = c; d > 1; d--){printf("(%d*%d) + ", d, b);}
            for ( x = 1, hasil = x * b; x < c; x++, hasil += (x*b));{
            printf("(%d*%d) = %d\n",d,b,hasil);}
    for ( y = 1,z = 1, r = 0; y <= a;z+=y+1,y++){
            r+= z * b;}}
    printf("%d",r);
}

