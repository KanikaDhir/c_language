
#include <stdio.h>

int main()
{
    char gen;
    long int sal,tax;
    printf("\n Enter your gender:");
    scanf("%c",&gen);
    fflush(stdin);
    scanf("%ld",&sal);
    if((gen=='m' && sal>200000)||(gen=='f' && sal>300000))
    {
            tax=0.10*sal;
            printf("%d",tax);
            printf("%d",sal);
    }
    else{
			printf("no tax");
        }
    }
}



