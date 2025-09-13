#include<stdio.h>
int main()
{
    int a;
    printf("Enter your marks");
    scanf("%d",&a);
    if(a>=30 && a<=70)
    {printf("You have obtained B grade");}
    if(a>=70 && a<90)
    {printf("You have obtained A grade");}
    if(a>=90 && a<=100)
    {printf("You have obtained A+ grade");}
    if(a<30 && a>0)
    {printf("You have obtained C grade");}
    else
        printf("Enter valid marks");
     return 0;
}