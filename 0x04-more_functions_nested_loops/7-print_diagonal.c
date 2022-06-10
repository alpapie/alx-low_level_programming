#include "main.h"

/**
 * print_diagonal- Print line dependent on the input
 * @n : The number of '_' characters
 * Return: Void.
 */

void print_diagonal(int n)
{
int i = 1;

if (n > 0)
{
	while (i <= n)
	{
		int j = 1;
        
		while (j <= i)
		{
			_putchar(' ');
			j++;
		}
		_putchar('\\');
		_putchar('\n');
		i++;
	}
}
_putchar('\n');
}
