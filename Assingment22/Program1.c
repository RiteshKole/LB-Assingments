/*Q) Accept number from user and Display below pattern

    input: 5
    output :  A     B   C   D   E  
*/             
#include <stdio.h>

void pattern(int iNo)
{
  int icnt =0;

  for(icnt =0; icnt < iNo; icnt++)  // icnt start from 0 because = 'A' + 0 = A , 'A' + 1 = B
  {
    printf("%c\t",'A' + icnt); 
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