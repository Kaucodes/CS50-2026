#include <ctype.h>
#include <cs50.h>
#include <math.h>
#include <stdio.h>
#include <string.h>

int counters(string text);
void print_grade(int);
int coleman_index(int, int, int);

// Global variables.
int l, w, s, index;

int main(void)
{
    // Prompt the user for some text.
    string text = get_string("Text: ");
    // Analyzes the text.
    counters(text);
    // Compute the Coleman-Liau index.
    coleman_index(l, w, s);
    // Print results.
    print_grade(index);
}

// Count letters, words, sentences.
int counters(string text)
{
    int letters = 0;
    int words = 1;
    int sentences = 0;

    for (int i = 0; text[i] != '\0'; i++)
    {
        if (isalpha(text[i]) > 0)
        {
            letters++;
        }
        if (text[i] == ' ')
        {
            words++;
        }
        if (text[i] == '.' || text[i] == '!' || text[i] == '?')
        {
            sentences++;
        }
    }
    // Return the number of (letters, words, sentences) in text.
    return l = letters, w = words, s = sentences;
}
// Definition to grade the text.
int coleman_index(int x, int y, int z)
{
    return index = round(0.0588 * (x / ((float)y / 100)) - 0.296 * (z / ((float)y / 100)) - 15.8);
}
// Printing different outputs.
void print_grade(int grade)
{
    if (grade < 1)
    {
        printf("Before Grade 1\n");
    }
    else if (grade >= 16)
    {
        printf("Grade 16+\n");
    }
    else
    {
        printf("Grade %i\n", grade);
    }
}
