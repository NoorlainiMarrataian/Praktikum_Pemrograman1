#include <stdio.h>

int main()
{
    int ga,ge;
        scanf("%d", &ga);
    for(ge=1; ge<ga+1; ge++){
        if(ge % 2==1)
        printf("%d ", ge);}
        printf("\n");
    for(ge=ga; ge>0; ge--){
        if(ge %2==0)
        printf("%d ", ge);}
        printf("\n\n");
}
