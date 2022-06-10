#include "main.h"

/**
 * print_square - Print diagonal depending on the input
 * @size : The size of the sqaure '#'
 * Return: Void.
 */

void print_square(int size)
{
if (size > 0)
{
	int i = 0, j;

	while(i < size)
	{
		j = 0;
		while(j < size)
		{
			_putchar('#');
			j++;
		}
		_putchar('\n');
		i++;
	}
}
else
{
	_putchar('\n');
}
}
