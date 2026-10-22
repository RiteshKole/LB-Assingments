// Q1)-Program to divide two numbers
#include<stdio.h>
#include<stdlib.h>

int Divide(int ino1 ,int ino2)
{
    int iAns =0;

    if(ino2 ==0  )
    {
        return -1;
    }

    iAns = ino1 / ino2;

    return  iAns  ;
}

int main()
{
    int ivalue1=15 , ivalue2=5;
    int iRet = 0; 

    iRet = Divide( ivalue1,ivalue2);

    printf("Division is %d",iRet);



    return EXIT_SUCCESS;
}
