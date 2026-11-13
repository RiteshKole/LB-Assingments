/*Q) Accept number of rows and columns from user and display below pattern

input: row =4  col = 4

output :   A    B   C   D
output :   A    B   C   D
output :   A    B   C   D
output :   A    B   C   D
o

*/


#include<stdio.h>

void pattern(int iRow, int icol)
{
    int i =0, j=0;
    char ch = '\0';

    for(i = 1 ; i<= iRow; i++)
    {
        for(j =1, ch = 'A'; j <= icol; j++,ch++)
        {
            printf("%c\t",ch);
        }  
        printf("\n\n");  
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