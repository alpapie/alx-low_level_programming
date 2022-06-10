#include "main.h"

/**
 *more_numbers - prints all numbers from 0 to 14 for 10 times
 * Return: void
 */

void more_numbers(void)
{
int i;
int j;

for (j = 0; j < 10; j++)
{
	for (i = 0; i <= 14; i++)
	{
		if (i > 9)
		{
			_putchar(1 + '0');
		}
		_putchar(i % 10 + '0');
	}
	_putchar('\n');
}

}
