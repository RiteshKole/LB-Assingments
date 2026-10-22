// Q5) Acccept one character from user and check it is vowel(a,e,i,o,u)
#include<stdio.h>
#include<stdlib.h>

#define TRUE 1
#define FALSE 0

typedef int BOOL;

BOOL CheckVowel(char cValue)
{
    if((cValue == 'a') || (cValue == 'e') ||
       (cValue == 'i') || (cValue == 'o') ||
       (cValue == 'u') || (cValue == 'A') ||
       (cValue == 'E') || (cValue == 'I') ||
       (cValue == 'O') || (cValue == 'U'))
    {
        return TRUE;
    }
    else
    {
        return FALSE;
    }
}

int main()
{
    char cValue = '\0';
    BOOL bRet = FALSE;

    printf("Enter character\n");
    scanf("%c", &cValue);

    bRet = CheckVowel(cValue);

    if(bRet == TRUE)
    {
        printf("TRUE\n");
    }
    else
    {
        printf("FALSE\n");
    }

    return EXIT_SUCCESS;
}

