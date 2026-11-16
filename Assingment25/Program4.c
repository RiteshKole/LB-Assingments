/* Accept character from usera and check weather it is smallcase from (a to z)

input: a
output: true

input : D
output: false
 
*/

#include<stdio.h>
#include<stdbool.h>

#define true 1
#define false 0

typedef int BOOL;

BOOL checkSmall(char ch)
{
    if((ch >= 97) && (ch <= 122))
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

    bret = checkSmall(cValue);

    if(bret == true)
    {
        printf("it is Smallcase  \n");
    }
    else
    {
        printf("it is not smallcase \n");
    }


    return 0;
}