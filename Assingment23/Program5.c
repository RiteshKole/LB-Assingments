/*Q) Write program which accept string from user and count number of white spaces

input : "marvellous"

output: 0

input : Ritesh Mahesh Kole 

output: 2

*/

#include<stdio.h>


int Countwhite(char *str)
{
    int icnt =0;

    while(*str != '\0')
    {
        if(*str == ' ')
        {
            icnt++;
        }
        str++;
    }

    return icnt;

}
int main()
{
    char Arr[50];
    int iRet = 0;

    printf("Enter string: ");
    scanf("%[^\n]",Arr);

    iRet = Countwhite(Arr);

    printf("number of white spaces is : %d\n",iRet);

    return 0;
}