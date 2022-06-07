#include "main.h"

/**
 * main - to tell if a random number is either - or +
 *
 * n is the random integer
 *
 * for 10 round
 *
 * Return: the integer
 */

void print_alphabet_x10(void)
{
int i = 1;

for ( ; i <= 10 ; i++)
{
	char cha = 'a';

	while (cha <= 'z')
	{
		_putchar(cha);
		cha++;
	}
	_putchar('\n');
}
}
