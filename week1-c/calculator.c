#include <stdio.h>

int main(void)
{
    int x, y;

    printf("What's x? ");
    scanf("%d", &x);

    printf("What's y? ");
    scanf("%d", &y);

    if (y == 0)
    {
        printf("Error: division by zero is not allowed.\n");
        return 1;
    }

    printf("%f\n", (double)x / y);
    return 0;
}