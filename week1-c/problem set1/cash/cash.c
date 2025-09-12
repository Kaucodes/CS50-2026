#include <cs50.h>
#include <stdio.h>

int main()
{
    float amount;
    int quarters, dimes, nickels, pennies;
    do
    {
        amount = get_float("Change owed: ");
    } while (amount <= 0);

    quarters = amount / 25;
    amount -= quarters * 25;

    dimes = amount / 10;
    amount -= dimes * 10;

    nickels = amount / 5;
    amount -= nickels * 5;

    pennies = amount;

    printf("Quarters: %d\n", quarters);
    printf("Dimes: %d\n", dimes);
    printf("Nickles: %d\n", nickels);
    printf("Pennies: %d\n", pennies);
    printf("Total coins: %d\n", quarters + dimes + nickels + pennies);

    return 0;
}