/*Q) Wriet a program which accept string from user andd reverse it 

    input : abcd
    
    output: dcba

    input : abba
    
    output: abba
        
*/

#include<stdio.h>

void StrRevX(char *str)
{
    char *start = str;
    char *end = str;
    char temp;

    while(*end != '\0')
    {
        end++;
    }
    end--;

    while(start < end)
    {
        temp = *start;
        *start = *end;
        *end = temp;

        start++;
        end--;
    }
    
}

int main()
{
    char Arr [20];

    printf("Enter string :");
    scanf("%[^'\n']s",Arr);

    StrRevX(Arr);

    printf("modified string is : %s",Arr);

    return 0;
}