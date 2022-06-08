#include "main.h"

/**
 * jack_bauer - prints a 24 hour timer
 */

void jack_bauer(void)
{
int hour=0;
int minute;

for (; hour <= 23 ; hour++)
{
	if (minute<10)
	{
		_putchar("0");
	}
    _putchar(minute)
	_putchar(hour);
    _putchar(":");
	minute=0;
	for (;minute <60 ; minute++)
	{
		if (minute<10)
		{
			_putchar("0");
		}
		_putchar(minute);
	}
	_putchar("\n");
}
}
