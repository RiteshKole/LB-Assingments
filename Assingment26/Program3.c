/*Q) Accept character from user and if it is capital then display all character from input til Z
     & if input is small a then print in reverse order till a   

     input :    Q
     output:    Q   R   S   T   U   V   W   X   Y   Z

     input:     f
     output:    f   e   d    c   b   a

*/
#include<stdio.h>

void Display(char ch)
{
    if((ch >= 'A') && (ch <= 'Z'))
    {
        while(ch <= 'Z')
        {
            printf("%c\t",ch);
            ch++;
        }
    }
    else if((ch >= 'a') && (ch <= 'z'))
    {
        while(ch >= 'a')
        {
            printf("%c\t",ch);
            ch--;
        }
    }
}

int main()
{
    char cValue = '\0';

    printf("Enter character: ");
    scanf("%c",&cValue);

    Display(cValue);

    return 0;
}