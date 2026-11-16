/*Q) Write program which accept a string from user and check weather it contain vowels or not 

input:  Marvellous
output: true 

input: Demo
output: true

input: xyz
output: false

*/

#include<stdio.h>
#include<stdbool.h>

bool CheckVowel(char *str)
{
    while(*str != '\0')
    {
        if((*str >= 'a' && *str <= 'z') || (*str >= 'A' && *str <= 'Z'))
        {
            if(*str == 'a' || *str == 'e' || *str == 'i' || *str == 'o' || *str == 'u' ||
               *str == 'A' || *str == 'E' || *str == 'I' || *str == 'O' || *str == 'U')
            {
                return true;
            }
        }
        str++;  //Moves the pointer to the next character.
    }

    return false;       //If the loop finishes without finding any vowel, return false
}

int main()
{
    char Arr[20];
    bool bRet = false;

    printf("Enter string: ");
    scanf("%[^'\n']s", Arr);

    bRet = CheckVowel(Arr);

    if(bRet == true)
    {
        printf("String contains vowels");
    }
    else
    {
        printf("String does not contain vowels");
    }

    return 0;
}

