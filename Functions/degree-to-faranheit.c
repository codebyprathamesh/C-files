#include<stdio.h>
float convert();
int main()
{   
     convert();
    return 0;
}
float convert()

{float sum;
    float x;
    printf("Enter the temperature in degree celcius");
    scanf("%f",&x);
    sum= (x*(9.0/5.0))+32.0;
    printf("The temperature in Farenheit is %f F",sum);
    return sum;



}