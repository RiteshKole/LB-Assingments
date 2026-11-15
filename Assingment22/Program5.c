/*Q) Accept number from user and Diaplay below pattern

    input:  8
    output : 2   4   6   8   10    12    14    16    
*/             

#include<stdio.h>

void Pattern(int iNo)
{
  int icnt =0;

  for(icnt =1;  icnt <= iNo; icnt++)
  {
    printf("%d\t",icnt * 2);
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

