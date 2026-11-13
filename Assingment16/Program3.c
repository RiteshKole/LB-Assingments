/*Q) Accept number of rows and columns from user and display below pattern

input: row =3  col = 5

output :  A   A   A   A   A 
output :  B   B   B   B   B
output :  C   C   C   C   C 
   
*/


#include<stdio.h>

void pattern(int iRow, int icol)
{
    int i =0, j =0;
    char ch ='\0';

    for(i =1; i<= iRow; i++)
    {
        char ch  = 'A';
        for(j =1; j<= icol; j++)
        {
            printf("%c\t",'A' + i - 1);
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