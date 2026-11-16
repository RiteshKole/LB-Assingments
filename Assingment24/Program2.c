/*Q) Write a program which accept string from user and accept one character and return frequancy of that character

    input :"Marvellous Multi OS"
    character: M
    output: 2

    input :"Marvellous Multi OS"
    character:  W
    output: 0
        
*/

#include<stdio.h>

int CountChar(char *str, char ch)
{
    int icnt =0;

    while(*str != '\0')
    {
        if(*str == ch)
        {
            icnt++;
        }
        str++;
    }

    return icnt;
}


int main()
{
    char arr [50];
    char cValue;
    int iRet = 0;

    printf("Enter string : \n");
    scanf("%[^'\n']s",arr);

    printf("Enter the character :\n");
    scanf(" %c",&cValue);               

    iRet = CountChar(arr,cValue);

    printf("frequancy of character is :%d",iRet);

    return 0;
}