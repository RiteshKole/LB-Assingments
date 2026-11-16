/*Q) Write program which accept string from user and toggle the case

input : "Marvellous Multi OS"

output:  "mARVELLOUS mULTII OS" 


*/
#include<stdio.h>

void StrtoggleX(char *str)
{
    while(*str != '\0')
    {
        if(*str >= 'A' && *str <= 'Z')
        {
            *str = *str + 32;
        }
        else if (*str >= 'a' && *str <='z')
        {
            *str = *str - 32;
        }

        str++;
    }
}

int main()
{
    char Arr[50];

    printf("Enter string: ");
    scanf("%[^\n]",Arr);

    StrtoggleX(Arr);

    printf("String after toggle case  is: %s\n",Arr);

    return 0;
}