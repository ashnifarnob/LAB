#include <stdio.h>

void perfectnumber(int number);

int main(void)
{
    int num;

    do
    {
        printf("please enter the value to check Perfect NUMBER or NOT: ");

        scanf("%d", &num);

    }
    while (num < 1);

    perfectnumber(num);

    return 0;
}

void perfectnumber(int number)
{
    int counter = 1;
    int factorsSum = 0;

    while (counter < number)
    {
        if (number % counter == 0)
        {
            factorsSum = factorsSum + counter;
        }

        counter++;
    }

    if (factorsSum == number)
    {
        printf("%d is a perfect number\n", number);
    }

    else
    {
        printf("%d is not a perfect number\n", number);
    }
}
