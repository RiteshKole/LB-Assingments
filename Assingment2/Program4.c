// Q4) Accept two number from user and display first number in Second number of times.
#include<stdio.h>
#include<stdlib.h>

/* 
input:   12  5
output:  12  12  12  12  12

input:   -2  3
output:  -2  -2  -2

input:  21 -3
output: 21  21  21

input:  -2  0
output: 

*/   

void Display(int ino,int Frequancy)
{
  int iCnt = 0;

  for(iCnt =1;iCnt <= Frequancy; iCnt++)
  {
    printf("%d\t",ino);
  }
}

int main()
{
  int ivalue =0;
  int icount =0;

  printf("Enter number \n");
  scanf("%d",&ivalue);

  printf("Enter number \n");
  scanf("%d",&icount);

  Display(ivalue,icount);

  return EXIT_SUCCESS;
}