/* Accept character from usera and check weather it is alphabet or not

input: b
output: true

input : &
output: false
 
*/

#include<stdio.h>
#include<stdbool.h>

#define true 1
#define false 0

typedef int BOOL;

BOOL checkAlpha(char ch)
{
    if((ch >= 65) && ( ch <= 90) || (ch >= 97) && (ch <= 122))
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

    bret = checkAlpha(cValue);

    if(bret == true)
    {
        printf("it is character \n");
    }
    else
    {
        printf("it is not character \n");
    }


    return 0;
}