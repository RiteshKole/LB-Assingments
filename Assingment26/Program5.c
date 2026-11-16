/*Q) accept character from user and Display its Ascii value in decimaal octal and hexadecimal

input:  A

output: 
Decimal : 65
Octal : 101
Hexadecimal : 41 
*/ 

#include<stdio.h>

void DisplayASCII(char ch)
{
    printf("Decimal : %d\n",ch);
    printf("Octal : %o\n",ch);
    printf("Hexadecimal : %x\n",ch);
}

int main()
{
    char cValue = '\0';

    printf("Enter character: ");
    scanf("%c",&cValue);

    DisplayASCII(cValue);

    return 0;
}