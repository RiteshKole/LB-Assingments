/*Q) Accept number of rows and columns from user and display below pattern

    input: row = 5 col = 5

    output :  $   *   *   *   *
              *   $   *   *   *
              *   *   $   *   *
              *   *   *   $   *
              *   *   *   *   $
*/

#include<stdio.h>

void pattern(int iRow, int icol)
{
    int i , j =0;
      
    for(i = 1; i <= iRow; i++)
    {
        for(j = 1; j <= icol; j++)
        {
           if( i ==j)
           {
            printf("$\t");
           }
           else
           {
            printf("*\t");
           }
        }
        
        printf("\n"); 
    }  
    
}

int main()
{
    int ivalue1 =0, ivalue2 =0;

    printf("Enter number of rows:");
    scanf("%d",&ivalue1);

    printf("Enter number of columns:");
    scanf("%d",&ivalue2);

    pattern(ivalue1,ivalue2);


    return 0;
}