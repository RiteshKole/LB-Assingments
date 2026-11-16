/*Q) Write program which accept a string from user and count capital characters

input:  Marvellous Multi OS
output:    4

*/

#include<stdio.h>

int CountCapitll(char *str)
{
    int icnt =0;

    while(*str != '\0')
    {
        if((*str >= 'A') && (*str <= 'Z'))
        {
            icnt++;
        }
        str++;
    }

    return icnt;
}

int main()
{
    char Arr [20];
    int iRet =0;

    printf("Enter string :");
    scanf("%[^'\n']s",Arr);

    iRet = CountCapital(Arr);

    printf(" capital leeterss in string :%d",iRet);

    return 0;
}