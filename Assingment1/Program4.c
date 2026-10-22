//Q4) Accept number and check it is divisible by 5 or not 
#include<stdio.h>
#include<stdlib.h>

typedef int BOOL;
#define TRUE 1
#define FALSE 0

 int check(int ino)
{
   if((ino % 5)==0)
   {
    return TRUE;
   }
   else
   {
    return FALSE;
   }
   
}

int main()
{
    int ivalue =0;
    BOOL bret = FALSE;

    printf("Enter number \n");
    scanf("%d",&ivalue);

    bret = check(ivalue);

    if(bret== TRUE)
    {
        printf("divisible by 5 \n");
    }
    else
    {
        printf("not divisible by 5\n");
    }

    return EXIT_SUCCESS;
}