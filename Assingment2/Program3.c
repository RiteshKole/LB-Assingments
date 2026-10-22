// Q3) Accept number from user if number is less than 10 then print "Hello" otherwise print "Demo"
#include<stdio.h>
#include<stdlib.h>

void Display(int ino)
{
   if(ino < 10)
   {
     printf("Hello\n");
   }
   else
   {
     printf("Demo\n");
   }
}

int main()
{
    int ivalue =0;

    printf("enter number\n");
    scanf("%d",&ivalue);

    Display(ivalue);

    return EXIT_SUCCESS;
}