/*Q) Write program which accept string from user and Display only number from that string

input : "marve89llous121"

output: 89121

input : Demo

output: 

*/

#include<stdio.h>

void DisplayDigit(char *str)
{
    while(*str != '\0')
    {
        if(*str >= '0' && *str <= '9')      //This condition checks whether the current character is between '0' and '9'
        {
            printf("%c",*str);
        }
        str++;
    }
}


int main()
{
    char Arr[50];

    printf("Enter string: ");
    scanf("%[^\n]",Arr);

    DisplayDigit(Arr);

    

    return 0;
}