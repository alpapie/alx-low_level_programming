#include "main.h"

/**
 * print_triangle - Print line dependent on the input
 * @size : The number of '_' characters
 * Return: Void.
 */

void print_triangle(int size)
{
int i = 1, j, nbr;

if (size > 0)
{
	for (; i <= size ; i++)
	{
		nbr = size - i;
		while ( nbr >= 1)
		{
			_putchar(' ');
			nbr--;
		}
		j = 0;
		while (j < i)
		{
			_putchar('#');
			j++;
		}
		_putchar('\n');
	}
}
else
{
	_putchar('\n');
}
}
