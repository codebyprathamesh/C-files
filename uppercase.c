#include<stdio.h>
int main()
{
  char ch ;
  printf("Enter a character");
  scanf("%s",&ch);
  if (ch>='A' && ch<='Z')
  {
    printf("The Given Character is An Upper Case");}
    if (ch>='a' && ch<='z')
  {
    printf("The Given Character is a Lower Case");}
    
    else 
    {printf("Enter a valid alphabet");}
    return 0;
}