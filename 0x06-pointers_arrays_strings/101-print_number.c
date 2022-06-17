#include "main.h"

/**
 *print_number - returns the largest of 3 numbers
 * @n: first integer
 * Return: n
 */

void print_number(int n)
{
unsigned int n1;

n1 = n;

if (n < 0)
{
	_putchar('-');
	n1 = -n;
}

if (n1 / 10 != 0)
{
	print_number(n1 / 10);
}
_putchar((n1 % 10) + '0');
}
