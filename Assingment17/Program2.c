/*Q) Accept number of rows and columns from user and display below pattern

    input: row = 4 col = 5

   output :  2   4   6   8   10
             1   3   5   7    9  
             2   4   6   8   10
             1   3   5   7    9  
*/
#include<stdio.h>

void pattern(int iRow, int icol)
{
    int i =0, j = 0;
    

    for(i =1 ; i <= iRow ; i++)
    {
        for(j =1; j<= icol ; j++)
        {
            if(i % 2 != 0)
            {
                printf("%d\t",j * 2);
            }
            else
            {
                printf("%d\t",(j * 2) - 1);
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