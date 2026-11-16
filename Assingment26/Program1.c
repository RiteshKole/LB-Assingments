/*Q) Write a program that display ascii table ,table contain symbol,decimal,hexadecimal,octal, representation 
     of every member from 0 to 255
*/

#include<stdio.h>

void DisplayASCII()
{
    int iCnt = 0;

    printf("Symbol\tDecimal\tHexadecimal\tOctal\n");

    for(iCnt = 0; iCnt <= 255; iCnt++)
    {
        printf("%c\t%d\t%X\t\t%o\n", iCnt, iCnt, iCnt, iCnt);
    }
}

int main()
{
    DisplayASCII();

    return 0;
}