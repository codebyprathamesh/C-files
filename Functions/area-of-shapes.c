#include<stdio.h>
float square(float a);
float circle(float b);
float rectangle(float c,float d );
int main()

{ float a,b,c,d;
    char check;
    printf("Choose the shape you want to find area\n Square(S)\nCirle(C)\nRectangle(R)\n");
    
    scanf("%c",&check);
    
    
   
    if(check=='S')
    {scanf("%f",&a);
        square(a);}
    if(check=='C')
    {scanf("%f",&b);
        circle(b);}
    if(check=='R')
    { scanf("%f",&c);
    scanf("%f",&d);
    rectangle(c,d);}
    return 0;
}
float square(float a)
{
    printf("the area of square is %f \n ",a*a);
    
    
}
float circle(float b)
{
    printf("the area of circle is %d \n ",3.14*b*b);
    
}
float rectangle(float c,float d)
{
    printf("the area of rectangle is %d units \n ",c*d);
    
}
