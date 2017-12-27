/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

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
         for(j=1;j<=i;j++){
            printf("*");
        }
        i++;
        printf("\n");
    }
}





