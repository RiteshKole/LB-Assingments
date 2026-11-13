/*Q) Accept number of rows and columns from user and display below pattern

    input: row = 5 col = 5

   output :  a   b   c   d   e
             1   2   3   4   5   
             a   b   c   d   e
             1   2   3   4   5  
*/
#include<stdio.h>

void pattern(int iRow, int icol)
{
    int i =0, j = 0;
    char ch = '\0';
    

    for(i =1 ; i <= iRow ; i++)
    {
    
        for(j =1 , ch ='a'; j<= icol ; j++, ch++)
        {
            if(i % 2 != 0)
            {
                printf("%c\t",'a' + j -1);
            }
            else
            {
                printf("%d\t",j);
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