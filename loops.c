#include <stdio.h>

int main()
{
   int i;
   for(i=1;i<=10;i++)
   {
       printf("\n %d",i*10);
   }
   i=1;
   while(i<=10)
   {
       printf("\n%d",i*5);
       i++;
   }
   i=1;
   do{
       printf("\n%d",i*2);
       i++;
   }while(i<=10);
}



