#include <stdio.h>
#include <stdlib.h>

void CheckGrade(int iMarks)
{
    if(iMarks < 0 || iMarks > 100)
    {
        printf("Invalid Marks\n");
    }
    else if(iMarks >= 90)
    {
        printf("Grade A\n");
    }
    else if(iMarks >= 75)
    {
        printf("Grade B\n");
    }
    else if(iMarks >= 60)
    {
        printf("Grade C\n");
    }
    else if(iMarks >= 40)
    {
        printf("Grade D\n");
    }
    else
    {
        printf("Fail\n");
    }
}

int main()
{
    int iMarks = 0;

    printf("Enter marks: ");
    scanf("%d", &iMarks);

    CheckGrade(iMarks);

    return EXIT_SUCCESS;
}