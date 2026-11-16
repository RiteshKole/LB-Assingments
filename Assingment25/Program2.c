/* Accept character from usera and check weather it is capital or not 

input: B
output: true

input : b
output: false
 
*/

#include<stdio.h>
#include<stdbool.h>

#define true 1
#define false 0

typedef int BOOL;

BOOL checkCapi(char ch)
{
    if((ch >= 65) && (ch <= 90))
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

    bret = checkCapi(cValue);

    if(bret == true)
    {
        printf("it is capital \n");
    }
    else
    {
        printf("it is not capital \n");
    }


    return 0;
}