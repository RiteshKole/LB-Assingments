//Q5) Accpet number from user and print that number of * on screen
#include<stdio.h>
#include<stdlib.h>

void Accept(int ino)
{
    int icnt =0;
    for(icnt=1; icnt<=ino; icnt++)
    {
        printf("*\n");
    }
}

int main()
{
    int ivalue =0;
    ivalue =5;

    Accept(ivalue);

    return EXIT_SUCCESS;
}