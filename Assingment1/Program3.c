//Q3) Program to print 5 to 1 numbers on screen
#include<stdio.h>

void Display()
{
    int icnt = 0;
    icnt = 5;

    while(icnt >= 1)
    {
        printf("%d ", icnt);
        icnt--;
    }
}

int main()
{
    Display();

    return 0;
}