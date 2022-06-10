#include "main.h"

/**
 *more_numbers - prints all numbers from 0 to 14 for 10 times
 */

void more_numbers(void)
{
int i;
int j;

for (j = 0; j <= 10; j++){
	for (i = 0; i <= 14; i++)
	{
		_putchar(i + '0');
	}
}
_putchar('\n');
}
