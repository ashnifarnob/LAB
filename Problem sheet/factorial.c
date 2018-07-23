#include <stdio.h>

int factorial(int n);

int main(void)
{
    printf("please input the integer: ");
    int x;
    scanf("%d",&x);

    printf("the %d! = %d\n",x,factorial(x));
}

int factorial(int n)
{
        if (n <= 0)
        {
            return 1;
        }

        else
        {
            return n * factorial(n - 1);
        }
}
