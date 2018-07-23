#include <stdio.h>
#include <math.h>

double squareSeries(int val);

int main(void)
{
    int Nth;
    printf("enter the nth for square series for natural numbers: ");
    scanf("%d", &Nth);

    printf("the sum of the series \n"
            "1^2 + 2^2 + 3^2 + .....%d^2 = %g\n", Nth, squareSeries(Nth));
}

double squareSeries(int nth)
{
    double sumOfSeries = 0.00;
    int i;

    for (i = 1; i <= nth; i++)
    {
        sumOfSeries = pow(i, 2) + sumOfSeries;
    }
    return sumOfSeries;
}
