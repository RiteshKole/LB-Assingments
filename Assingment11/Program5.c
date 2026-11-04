#include<stdio.h>
#include<stdlib.h>

RangeDisplayRev(int iStart, int iEnd)
{
    int icnt =0;

    if((iStart <= 0) || (iEnd <= 0) || (iStart > iEnd))
    {
        return;
    }

    for(icnt > iEnd; icnt >= iStart; icnt --)
    {
        printf("%d \t",icnt);
    }
}


int main()
{
    int ivalue1 =0, ivalue2 =0;

    printf("Enter starting point \n");
    scanf("%d",&ivalue1);

    printf("Enter ending point \n");
    scanf("%d",&ivalue2);

    RangeDisplayRev(ivalue1,ivalue2);

    return EXIT_SUCCESS;
}