/*Q) Write program which accept string from user and convert it into Upper case

input : "marvellous multi os"

output:  "MARVELLOUS MULTI OS"


*/
#include<stdio.h>

void strupperx(char *str)
{
    while(*str != '\0')     //Checks each character of the string.
    {
        if(*str >= 'a' && *str <= 'z')  //Checks whether the current character is an lowercase letter.
        {
            *str = *str - 32;       //Converts lower case into uppercase
        }
        str++;
    }
}

int main()
{
    char Arr[50];

    printf("Enter string: ");
    scanf("%[^\n]",Arr);

    strupperx(Arr);

    printf("String in uppercase is: %s\n",Arr);

    return 0;
}