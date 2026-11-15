/*Q) Accept number of rows and columns from user and display below pattern

    input: row = 3  col = 5

    output :    5   4   3   2   1
                5   4   3   2   1
                5   4   3   2   1  
                
*/             
#include <stdio.h>

void pattern(int iRow, int iCol)
{
  int i , j =0;

  for(i =1; i <= iRow; i++)
  {
    for(j = iCol; j >= 1; j--)
    {
      printf("%d\t",j);
    }

    printf("\n");
  }
}


int main()
{
  int ivalue1 = 0, ivalue2 = 0;

  printf("Enter number of rows:");
  scanf("%d", &ivalue1);

  printf("Enter number of columns:");
  scanf("%d", &ivalue2);

  pattern(ivalue1, ivalue2);

  return 0;
}