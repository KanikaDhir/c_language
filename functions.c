/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>

int main()
{
    int s;
    float t;
    print();
    show();
    add(3,4);
    get("Kanika",21);
    s=sum();
   // t= tax();
    printf("sum from main: %d",s);
    s=jodho(5,6);
    printf("\nResults from jodho: %d",s);
    s=catc(4,5);
    printf("value of s:%d", s);
    return 0;
}

//no arguments no return type
void print(){
    printf("Hello this is the function");
}
void show()
{
    printf("\nKanika Dhir");
}

//with arguments without return type
void add(int a,int b){
    printf("\nSum=%d",a+b);
}

void get(char name[],int age)
{
    printf("\nName:%s",name);
    printf("\nAge:%d",age);
}

//without arguments with return type
int sum(){
    int a,b;
    printf("\nEnter 2 numbers: ");
    scanf("%d%d",&a,&b);
    return a+b;
}

/*float tax()
{
    int sal;
    float t;
    printf("\nEnter salary:");
    scanf("%d",&sal);
    t=0.20*sal;
    return t;
}*/

//with arguments with return type
int jodho(int y,int z){
    return y+z;
}

int catc(int num1,int num2)
{
    int temp;
    printf("\nbefore swap:%d %d", num1, num2);
    temp=num1;
    num1=num2;
    num2=temp;
    printf("\nAfter %d %d", num1, num2);
    return 1;
    
}


//functions with pointers
