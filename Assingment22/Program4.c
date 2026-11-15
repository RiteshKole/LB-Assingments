/*Q) Accept number from user and Diaplay below pattern

    input: 5
    output : #  1   *   #   2   *   #   3   *   #   4   *   #   5   *    
*/             

#include<stdio.h>

void Pattern(int iNo)
{
  int icnt =0;

  for(icnt =1;  icnt <= iNo; icnt++)
  {
    printf("#\t %d\t *\t",icnt);
  }

}
 
int main()
{

  int ivalue =0;

  printf("Enter the element :");
  scanf("%d",&ivalue);

  Pattern(ivalue);

  return 0;
}  

