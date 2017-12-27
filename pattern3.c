#include <stdio.h>

int main()
{

    int i=0,j;
    for(;i<5;){
	for(j=i;j<5;j++)
        {
           printf(" ");
        }
        for(j=0;j<=i;j++){
            printf("*");
        }
        i++;
        printf("\n");
    }
}

