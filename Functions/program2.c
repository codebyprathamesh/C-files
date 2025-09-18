#include<stdio.h>
void French();
void Indian();
int main()
{int a;
    printf("Enter your Region \n 1.India \n 2.France");
    scanf("%d",&a);
    if(a==1)
    {Indian();}
    else if (a==2)
    {French();}
    else{
        printf("Not a valid argument.");
    }
    return 0;
}
 void French()
{
printf("Bonjour");
}
void Indian()
{
    printf("Namaste");
}