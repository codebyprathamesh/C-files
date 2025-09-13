#include<stdio.h>
int main()
{ int a;
    printf("Enter your marks");
    scanf("%d",&a);
    if(a>30 && a<=100)
    {printf("PASS");}
    else if (a<=30 && a>0)
    {printf("FAIL");}
    else 
    {printf("Wrong Marks");}
    return 0;

}