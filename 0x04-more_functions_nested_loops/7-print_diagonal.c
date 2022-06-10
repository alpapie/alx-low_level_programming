#include "main.h"

/**
 * print_diagonal- Print line dependent on the input
 * @n : The number of ' ' and '\' characters
 * Return: Void.
 */

void print_diagonal(int n)
{
int i = 0, j;

if (n > 0)
{
	while (i < n)
	{
		j = 0;
		while (j < i)
		{
			_putchar(' ');
			j++;
		}
		_putchar('\\');
		_putchar('\n');
		i++;
	}
}
else
{
	_putchar('\n'); 
}
}
