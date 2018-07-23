#include <math.h>
#include <stdbool.h>
#include <stdio.h>

bool isPrime(int number);

int main(void)
{
    int num;

    do
    {
        printf("please enter the value to check PRIME NUMBER or NOT: ");

        scanf("%d", &num);

    }
    while (num < 2);

    if (isPrime(num))
    {
        printf("the %d is prime number\n", num);
    }

    else
    {
        printf("the %d is not a prime number\n", num);
    }

    return 0;
}

bool isPrime(int number)
{
    int divisor;

    for (divisor = 2; divisor < sqrt(number); divisor++)
    {
            if (number % divisor == 0) break;
    }

    if (divisor > sqrt(number))
    {
        return true;
    }

    else
    {
        return false;
    }
}

