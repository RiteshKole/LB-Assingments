/*Q) Write a program which accept string from user and accept one character and return index of last occurance

    input :"Marvellous Multi OS"
    character: M
    output: 10

    input :"Marvellous Multi OS"
    character:  W
    output: -1
        
*/

#include<stdio.h>

int LastChar(char *str, char ch)
{
    int iCnt = 0;
    int iPos = -1;      //it stores the position of the character and nitially, we store -1 because we haven't found the character yet

    while(*str != '\0')
    {
        if(*str == ch)
        {
            iPos = iCnt;
        }

        iCnt++;
        str++;
    }

    return iPos; //After checking the complete string, it returns the last stored position.
}

int main()
{
    char Arr[100];
    char cValue = '\0';
    int iRet = 0;

    printf("Enter string: ");
    scanf("%[^\n]", Arr);

    printf("Enter character: ");
    scanf(" %c", &cValue);

    iRet = LastChar(Arr, cValue);

    printf("Last occurrence index is: %d\n", iRet);

    return 0;
}