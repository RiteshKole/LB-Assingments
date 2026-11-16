/* Accept character from usera and check weather it is digit or not

input: 8
output: true

input : b
output: false
 
*/

#include<stdio.h>
#include<stdbool.h>

#define true 1
#define false 0

typedef int BOOL;

BOOL checkDigit(char ch)
{
    if((ch >= 48) && (ch <= 57))
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
    BOOL bret = false;

    printf("Enter Character :");
    scanf("%c",&cValue);

    bret = checkDigit(cValue);

    if(bret == true)
    {
        printf("it is Digit  \n");
    }
    else
    {
        printf("it is not digit \n");
    }


    return 0;
}