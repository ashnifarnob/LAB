#include <stdio.h>
#include <math.h>

int sumSeries(int val);

int main(void)
{
    int Nth;
    printf("enter the nth for square series for natural numbers: ");
    scanf("%d", &Nth);

    printf("the sum of the series \n"
            "1 + 2 + 3 + .....+ %d = %d\n", Nth, sumSeries(Nth));

    return 0;
}

int sumSeries(int nth)
{
    int sumOfSeries = 0;
    int i;

    for (i = 1; i <= nth; i++)
    {
        sumOfSeries = i + sumOfSeries;
    }
    return sumOfSeries;
}
