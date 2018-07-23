#include <stdio.h>

void reverseDigit(long long int val);

int main(void)
{
    long long int value = 0;

    printf("enter the positive value: ");
    scanf("%lli", &value);

    if (value == 0)
    {
        printf("%lli", value);
    }

    else
    {
        reverseDigit(value);
    }

    return 0;
}

void reverseDigit(long long int val)
{
    while( val != 0)
    {
        long long int digit = val % 10;

        val /= 10;

        printf("%lli\n", digit);
    }
}
