#include "main.h"

/**
 * print_triangle - Print line dependent on the input
 * @size : The number of '_' characters
 * Return: Void.
 */

void print_triangle(int size)
{
int i=1, j,nbr ;
if (size > 0)
{
	for (; i <= size ; i++)
	{
		nbr=size - i;
		while ( nbr >= 1)
		{
			putchar(' ');
			nbr--;
		}
		j=0;
		while (j < i)
		{
			putchar('#');
			j++;
		}
		putchar('\n');
	}
	putchar('\n');
}
else
{
	putchar('\n');
}
}
