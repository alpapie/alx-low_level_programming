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

if (n < 0)
{
	n = n * -1;
}
last_digit = n % 10;
printf("%d",last_digit );
return (last_digit);
}
