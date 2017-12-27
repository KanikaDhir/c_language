/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>

int main()
{

    int i=0,j,c=0;
    for(;i<5;){
	for(j=i;j<5;j++)
        {
           printf(" ");
        }
        for(j=0;j<=c;j++){
            printf("*");
        }
        c+=2;
        i++;
        printf("\n");
    }
}





