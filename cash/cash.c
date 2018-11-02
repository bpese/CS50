#include <cs50.h>
#include <stdio.h>
#include <math.h>

int main(void)
{
    float change;
    int n;
    int counter;

    do
    {
        //asking how much change is owed
        printf("Change owed: ");
        change = get_float();
    }
    while (change < 0);

    n = roundf(change * 100);

    counter = 0;

    while (n >= 25)
    {
        //number of quarters
        counter++;
        n = n - 25;
    }

    while (n >= 10)
    {
        //number of dimes
        counter++;
        n = n - 10;
    }
    while (n >= 5)
    {
        //number of nickels
        counter++;
        n = n - 5;
    }
    printf("%d\n", counter + n);

    return 0;

}