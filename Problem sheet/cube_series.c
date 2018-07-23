#include <stdio.h>
#include <math.h>

double cubeSeries(int val);

int main(void)
{
    int Nth;
    printf("enter the nth for cubic series: ");
    scanf("%d", &Nth);

    printf("the sum of the series \n"
            "1^3 + 2^3 + 3^3 + .....+ %d^3 = %g\n", Nth, cubeSeries(Nth));
}

double cubeSeries(int nth)
{
    double sumOfSeries = 0.00;
    int i;

    for (i = 1; i <= nth; i++)
    {
        sumOfSeries = pow(i, 3) + sumOfSeries;
    }

    return sumOfSeries;
}
