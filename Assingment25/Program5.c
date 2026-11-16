/* Accept divison from user depend on the division display time of exam thera are 4 divisions A,B,C,D
   exam time of division is A is 7 AM, B at 8.30 AM, c at 9.30 AM, D at 10.30 AM (Application is insensitive)

input: C
output: your exam at 9.30

input : d
output: your exam at 10.30
 
*/

#include<stdio.h>

void DisplaySchedule(char chDiv)
{
    switch(chDiv)
    {
        case 'A':
        case 'a':
            printf("Your exam at 7 AM\n");
            break;

        case 'B':
        case 'b':
            printf("Your exam at 8.30 AM\n");
            break;

        case 'C':
        case 'c':
            printf("Your exam at 9.20 AM\n");
            break;

        case 'D':
        case 'd':
            printf("Your exam at 10.30 AM\n");
            break;

        default:
            printf("Invalid division\n");
            break;
    }
}

int main()
{
    char cValue = '\0';

    printf("Enter your division:\n");
    scanf("%c",&cValue);

    DisplaySchedule(cValue);

    return 0;
}