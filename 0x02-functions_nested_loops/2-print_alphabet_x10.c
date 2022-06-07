#include "main.h"

/**
 * main - to tell if a random number is either - or +
 *
 * n is the random integer
 *
 * Return: the integer
 */

void print_alphabet_x10(void)
{
int i = 1;
char cha='a';

for(; i <= 10 ; i++)
{
    while (cha <= 'z')
    {
        _putchar(cha);
        cha++;
    }
}
_putchar('\n');
}
