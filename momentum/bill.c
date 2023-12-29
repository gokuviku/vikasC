#include <stdio.h>
int main()
{
    int units;
    float charge;

    printf("Enter the number of units consumed: ");
    scanf("%d", &units);
    float bill = 0.0;
    float extra_charge = 0.0;

    if (units <= 50)
    {
        charge = 0.50;
        bill = units * charge;
    }
    else if (units <= 150)
    {
        charge = 0.75;
        bill = 50 * 0.50;
        units = units - 50;
        bill +=units * charge;
    }
    else if (units <= 200)
    {
        charge = 1.20;
        bill = 50 * 0.50;
        bill += 100 * 0.75;
        units = units - 150;
        bill +=units * charge;
    }
    else if (units <= 250)
    {
        charge = 1.20;
        bill = 50 * 0.50;
        bill += 100 * 0.75;
        bill += 50 * 1.20;
        units = units - 200;
        bill +=units * charge;
    }
    else
    {
        charge = 1.50;
        bill = 50 * 0.50;
        bill += 100 * 0.75;
        bill += 50 * 1.20;
        bill += 50 * 1.50;
        units = units - 250;
        bill +=units * charge;
    }

    // Calculating 20% extra charge on the final bill
    extra_charge = bill * 0.20;

    // Printing the charge separately
    printf("Electricity charge: Rs. %.2f\n", bill);
    printf("Extra 20%% charge: Rs. %.2f\n", extra_charge);

    // Adding the extra charge to the final bill
    bill += extra_charge;

    printf("Total electricity bill (including 20%% extra charge): Rs. %.2f\n", bill);

    return 0;
}