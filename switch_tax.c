#include <stdio.h>

int main()
{
    char gen;
    long int sal,tax;
    printf("\n Enter your gender:");
    scanf("%c",&gen);
    fflush(stdin);
    scanf("%ld",&sal);
    switch(gen)
    {
        case 'M':
        case 'm': if(sal>200000)
                    {
                        tax=0.10*sal;
                    }
                    break;
        case 'F':
        case 'f': if(sal>300000)
                    {
                            tax=0.10*sal;
                    }
                    break;
        default: printf("\n Wrong input");
    }
    printf("tax:%d",tax);
    printf("salary:%d",sal);
    
}