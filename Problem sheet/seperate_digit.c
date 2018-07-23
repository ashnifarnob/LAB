#include <stdio.h>

// function prototype
void seperateDigit(int val);

int main(void)
{
    int value = 0;

    printf("enter the value: ");
    scanf("%d", &value);

    // calling seperateDigit function
    seperateDigit(value);
}

// implementing seperateDigit recursive function
void seperateDigit(int val)
{
    // base case
    if (val == 0)
    {
        return;
    }

    else
    {
        int digit = val % 10;

        val /= 10;

        // calling seperateDigit function
        seperateDigit(val);

        printf("%d\n", digit);
    }
}
