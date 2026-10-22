// Q1) Accept number from user and print that number of * on screen
#include<stdio.h>
#include<stdlib.h>

void Display(int ino)
{
    int icnt =0;

    while(icnt<= ino)
    {
        printf("*\n");
        icnt++;
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