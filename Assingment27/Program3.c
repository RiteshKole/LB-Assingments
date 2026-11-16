/*Q) Write program which accept a string from user and return diffrence between frequancy of small and capital characters

input:  MarvellouS
output:  6 (8 - 2)

*/

#include<stdio.h>

int Difference(char *str)
{
    int iSmall = 0;
    int iCapital = 0;

    while(*str != '\0')
    {
        if((*str >= 'a') && (*str <= 'z'))
        {
            iSmall++;
        }
        else if((*str >= 'A') && (*str <= 'Z'))
        {
            iCapital++;
        }

        str++;
    }

    return (iSmall - iCapital);
}

int main()
{
    char Arr[50];
    int iRet = 0;

    printf("Enter string: ");
    scanf("%[^'\n']s", Arr);

    iRet = Difference(Arr);

    if(iRet < 0)
    {
        iRet = -iRet;
    }

    printf("Difference is: %d\n", iRet);

    return 0;
}