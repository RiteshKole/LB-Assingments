/*Q) Accept number from user and Dsiplay below pattern

    input: 5
    output :  5  #   4   #   3   #   2   #   1   #  
*/             
#include <stdio.h>

void pattern(int iNo)
{
  int icnt =0;

  for(icnt =iNo; icnt >= 1; icnt--)  
  {
    printf("%d\t #\t ",icnt);
  } 
  
}


int main()
{
  int ivalue1 = 0;

  printf("Enter number of elemnts :");
  scanf("%d", &ivalue1);

  pattern(ivalue1);

  return 0;
}