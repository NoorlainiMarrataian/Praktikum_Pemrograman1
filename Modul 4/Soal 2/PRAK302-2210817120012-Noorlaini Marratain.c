#include <stdio.h>

int main()
{
    int N;
    scanf("%i", &N);
    if (N>=80 && N<=100){
        printf("A\n", N);}
    else if(N>70 && N<=79){
        printf("B\n");}
    else if(N>=60 && N<=69){
        printf("C\n");}
    else if(N>=50 && N<=59){
        printf("D\n");}
    else if(N<50){
        printf("E\n");}
}
