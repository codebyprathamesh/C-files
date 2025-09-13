#include<stdio.h>
int main()
{ int sum=0;
    int i=1;
    while (i<=4){
        sum=sum+i;
        i++;
    }
    printf("Value of sum of first 4 natural numbers is %d \n",sum);
    printf("The value in reverse order are : \n");
    while(i>0)

    {
        
        printf("%d\n",i);
        i--;
    }
    
    return 0;

}