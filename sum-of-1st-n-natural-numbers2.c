#include<stdio.h>
int main()
{ int sum=0;
    int i=4;
    while (i>=1){
        sum=sum+i;
        i++;
    }
    printf("Value of sum of first 4 natural numbers is %d",sum);
    return 0;

}