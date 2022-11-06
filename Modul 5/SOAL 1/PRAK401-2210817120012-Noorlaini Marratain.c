#include <stdio.h>

int main()
{
    int x, y, simbol;
        scanf("%d %c", &x,&simbol);
    for(y=1; y<=50; y++){
        if(y % x==0){
        printf("%c ", simbol);}
    else{
        printf("%d ", y);}
    }

}
