#include<stdio.h>
float check_marks();
int main()
{
float check_marks();
return 0;
}
float check_marks()
{ float a,b,c,percentage;
printf("Enter your marks in Science \n");
scanf("%f",&a);
printf("Enter your marks in Maths \n");
scanf("%f",&b);
printf("Enter your marks in Sanskrit \n");
scanf("%f",&c);
percentage =((a+b+c)/300)*100;
printf(" Congratulations! You've got %f % \n ");
return percentage;
}