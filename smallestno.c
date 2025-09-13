#include<stdio.h>
int main()
{
    int a,b;
    printf("enter first number");
    scanf("%d",&a);
    printf("Enter second number");
    scanf("%d",&b);
    if(a<b)
    {printf("%d is smallest",a);}
    if(b<a)
    {printf("%d is smallest",b);}
    return 0;
    

}