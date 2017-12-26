#include <stdio.h>

int main()
{

    int i=0,j;
    for(;i<4;){
        for(j=0;j<4;j++){
            printf("*");
        }
        i++;
        printf("\n");
    }
}