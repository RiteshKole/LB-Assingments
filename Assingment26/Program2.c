/*Q) Write a program which accept character from user and if character is small display its correseponding 
     capital and if it is capital then display it corresponding small in other cases display as it is

     input :    M
     output:    m

     input:     d
     output:    D

     input:     %
     output:    %
*/

#include<stdio.h>

void Display(char ch )
{
    if((ch >= 97) && (ch <= 122))
    {
        ch = ch - 32;
    }
    else if((ch >= 65) && (ch <= 90))
    {
        ch = ch + 32;
    }

    printf("Updated character is: %c\n",ch);


}

int main()
{
    char cValue = '\0';
    
    printf("Enter charcater :");
    scanf("%c",&cValue);

    Display(cValue);

    return 0;
}