/*Q) Accept number of rows and columns from user and display below pattern

input: row =4  col = 4

output :   A    B   C   D
output :   a    b   c   d
output :   A    B   C   D
output :   a    b   c   d

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
            if(i % 2 != 0)      // if the row is odd then it print ABCD
            {
                printf("%c\t",'A' + j - 1);
            }
            else                //else Row is even then it print abcd
            {
                printf("%c\t",'a' + j -1);
            }
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