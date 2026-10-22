#include <stdio.h>
#include <stdlib.h>

void CalculateDiscount(float fAmount)
{
    float fDiscount = 0.0f;
    float fFinalAmount = 0.0f;

    if (fAmount < 0.0f)
    {
        printf("Negative purchase amount is invalid.\n");
        return;
    }

    if (fAmount < 1000.0f)
    {
        fDiscount = 0.0f;
    }
    else if (fAmount < 5000.0f)
    {
        fDiscount = 0.10f;
    }
    else
    {
        fDiscount = 0.20f;
    }

    fFinalAmount = fAmount - (fAmount * fDiscount);

    printf("Discount: %.2f%%\n", fDiscount * 100.0f);
    printf("Payable amount: ₹%.2f\n", fFinalAmount);
}

int main()
{
    float fAmount = 0.0f;

    printf("Enter purchase amount: ");

    if (scanf("%f", &fAmount) != 1)
    {
        printf("Invalid input.\n");
        return EXIT_FAILURE;
    }

    CalculateDiscount(fAmount);

    return EXIT_SUCCESS;
}