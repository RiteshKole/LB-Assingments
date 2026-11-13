/*Q) Accept number of rows and columns from user and display below pattern

    input: row =3  col = 5

   output : 4   4   4   4   4
   output : 3   3   3   3   3
   output : 2   2   2   2   2
   output : 1   1   1   1   1

*/
#include<stdio.h>

void pattern(int iRow, int icol)
{
    int i =0 , j =0 ;

    for(i = iRow +1 ; i >= 1; i--)
    {
        for(j =1; j<= icol; j++)
        {
            printf("%d\t",i);
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