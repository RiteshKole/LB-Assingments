/*Q) Write a program which accept string from user and accept one character . check weather the character is present in string or not

    input :"Marvellous Multi OS"
    character: e
    output: true

    input :"Marvellous Multi OS"
    character:  W
    output: false
        
*/

#include<stdio.h>
#include<stdbool.h>

#define true 1
#define false  0

bool CheckChar(char *str ,char ch)
{
    while(*str != '\0')
    {
        if(*str == ch)
        {
            return true;
        }
        str++;
        
    }
    return false;
}

int main()
{
    char arr [50];
    char cValue;
    bool bRet = false;

    printf("Enter string : \n");
    scanf("%[^'\n']s",arr);

    printf("Enter the character :\n");
    scanf(" %c",&cValue);               //this space in scanf tell that ignore whitespace character before reading actual character

    bRet = CheckChar(arr,cValue);

    if(bRet == true)
    {
        printf("character found ");
    }
    else
    {
        printf("Charcter not found");
    }


    return 0;
}