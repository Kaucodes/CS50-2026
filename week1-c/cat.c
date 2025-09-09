#include <cs50>
#include <stdio.h>

// Prototype
void meow(int times);

int main(void)
{
    int n = get_int("what's n? ");
    meow(n);
}

void meow(int times)
{
    for (int i = 0; i < times; i++)
    {
        meow();
    }
}