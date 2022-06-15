#include "main.h"

/**
 * print_triangle - Print line dependent onv the input
 * @size : The number of '#' characters hahs
 * Return: Void.
 */
void print_triangle(int size)
{
int i, j, nbr;

if (size > 0)
{
	for (i = 1; i <= size; i++)
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
