/*Q) Accept number of rows and columns from user and display below pattern

    input: row =3  col = 4

   output : 1   2   3    4
            5   6   7    8
            9   10  11   12
   
*/
#include<stdio.h>

void pattern(int iRow, int icol)
{
    int i =0, j = 0;
    int iNo =1;

    for(i =1 ; i <= iRow ; i++)
    {
        for(j =1; j<= icol ; j++)
        {
            printf("%d\t",iNo);
            iNo++;
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