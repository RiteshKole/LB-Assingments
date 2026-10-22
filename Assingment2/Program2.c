// Q2) Accept number from user and print that  * on screen
#include<stdio.h>
#include<stdlib.h>

void Display(int ino)
{
    int icnt =0;

    while(ino > 0)
    {
        printf("*\n");
        ino--;
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