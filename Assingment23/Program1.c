/*Q) Write program which accept string from user and convert it into lower case

input : "Marvellous Multi OS"

output:  "marvellous multi os"

*/
#include<stdio.h>

void strlwrx(char *str)
{
    while(*str != '\0')     //Checks each character of the string.
    {
        if(*str >= 'A' && *str <= 'Z')  //Checks whether the current character is an uppercase letter.
        {
            *str = *str + 32;       //Converts uppercase into lowercase using ascii value
        }
        str++;
    }
}

int main()
{
    char Arr[50];

    printf("Enter string: ");
    scanf("%[^\n]",Arr);

    strlwrx(Arr);

    printf("String in lowercase is: %s\n",Arr);

    return 0;
}