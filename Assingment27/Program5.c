/*Q) Write program which accept a string from user and dispaly in it reverse order 

input:  Marvellous
output: soullevram

*/

#include<stdio.h>

void DisplayReverse(char *str)
{
    int iLength = 0;
    int iCnt = 0;

    // Calculate length of string
    while(*str != '\0')
    {
        iLength++;
        str++;
    }

    str--;

    // Display string in reverse order
    for(iCnt = iLength - 1; iCnt >= 0; iCnt--)
    {
        printf("%c", *(str - (iLength - 1 - iCnt)));
    }
}

int main()
{
    char Arr[100];

    printf("Enter string: ");
    scanf("%99[^\n]", Arr);

    DisplayReverse(Arr);

    return 0;
}