#include<stdio.h>
int main()
{
   int n;
   printf("Enter number :");
   
   
   scanf( "%d",&n);
   printf("Reverse order of the number is ");
   for ( int i=10; i>=1 ; i--)
   {
    printf( "%d \n",n*i);
   }
   return 0;
}