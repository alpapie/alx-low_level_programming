#include "main.h"

/**
 *print_to_98 - prints all natural numbers from n to 98
 *
 *@n: parameter or number passed in the function
 *Description:
 */

void print_to_98(int n)
{
if (n<=98)
{
	while (n<=98)
    {
		_putchar(n);
		_putchar(', ');
		n++;
	}
	_putchar('\n');
}
else
{
	while (n>=2)
	{
		_putchar(n);
		_putchar(', ');
		 n--;
	}
	_putchar('\n');
}
}
