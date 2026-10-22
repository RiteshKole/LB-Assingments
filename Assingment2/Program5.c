// Q5) Accept  number from user and check weather number is even or odd
#include<stdio.h>
#include<stdlib.h>

#define true 1
#define false 0

typedef int BOOL;

BOOL CheckEven(int ino)
{
  if((ino % 2)==0)
  {
    return true;
  }
  else
  {
    return false;
  }
}
int main()
{
  int ivalue =0;
  BOOL bRet = false;
  
  printf("Enter number \n");
  scanf("%d",&ivalue);

  bRet = CheckEven(ivalue);

  if(bRet == true)
  {
    printf("number is even\n");
  }
  else
  {
    printf("number is odd\n");
  }


  return EXIT_SUCCESS;
}