#include <cs50.h>
#include <stdio.h>

// This is a simple program to greet user.
int main(void)
{
    string name = get_string("What's your name? ");
    printf("Hello, %s.\n", name);
}