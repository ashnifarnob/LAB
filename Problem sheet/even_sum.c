#include <stdio.h>

int main(void)
{
    int i = 0;
    int sum = 0;

    while (i <= 100)
    {
         sum = sum + i;
         i += 2;
    }

    printf("the sum %d\n", sum);
}
