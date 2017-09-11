#include <stdio.h>
#include <conio.h>

int main()
{
    int i = 0, minimumCoinsRequired = 0;
    double change = 0.0;
    double coins[] = { 0.25, 0.10, 0.05, 0.01 };

    printf("Enter the amount of change: ");
    scanf("%lf", &change);

    while (change > coins[3])
    {
        for (i = 0; i < 4; i++)
        {
            if (coins[i] <= change)
            {
                change -= coins[i];
                minimumCoinsRequired += 1;

                break;
            }
        }
    }

    printf("\nMinimum number of coins required: %d\n", minimumCoinsRequired);

    getch();

    return 0;
}
