/*Q) accept character from user and check weaather it is special symbol or not (! @ # $  % ^ & *)

input:   %
output:  true 

input:   d
output: false

*/ 

#include<stdio.h>
#include<stdbool.h>


bool CheckSpecial(char ch)
{
    if((ch == '!') || (ch == '@') || (ch == '#') ||
       (ch == '$') || (ch == '%') || (ch == '^') ||
       (ch == '&') || (ch == '*'))
    {
        return true;
    }
    else
    {
        return false;
    }
}

int main()
{
    char cValue = '\0';
    bool bRet = false;

    printf("Enter character: ");
    scanf("%c",&cValue);

    bRet = CheckSpecial(cValue);

    if(bRet == true)
    {
        printf("it is special character ");
    }
    else
    {
        printf("it is not special character");
    }

    return 0;
}