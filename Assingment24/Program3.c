/*Q) Write a program which accept string from user and accept one character and return index of first occurance

    input :"Marvellous Multi OS"
    character: M
    output: 2

    input :"Marvellous Multi OS"
    character:  W
    output: -1
        
*/

#include<stdio.h>

int FirstChar(char *str, char ch)
{
    int iCnt = 0;

    while(*str != '\0')
    {
        if(*str == ch)
        {
            return iCnt;
        }

        iCnt++;
        str++;
    }

    return -1;
}

int main()
{
    char Arr[100];
    char cValue = '\0';
    int iRet = 0;

    printf("Enter string: ");
    scanf("%[^'\n']s", Arr);

    printf("Enter character: ");
    scanf(" %c", &cValue);

    iRet = FirstChar(Arr, cValue);

    printf("Index is: %d\n", iRet);

    return 0;
}
    