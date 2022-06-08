#include "main.h"

/**
 * print_last_digit - prints the last digit of the parameter
 *@n: parameter passed in the function
 *Description: the function returns the last digit
 *Return: Always(0) Success
 */

int print_last_digit(int n)
{
int last_digit;

last_digit = n % 10;

if (n < 0)
{
	last_digit = last_digit * -1;
	_putchar(last_digit);
}

_putchar(last_digit + '0');

return (last_digit);
}

