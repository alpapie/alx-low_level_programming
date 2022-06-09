#include "main.h"

/**
 * _isdigit - returns the largest of 3 numbers
 * @c: first integer
 * Return: 0 if c is not a digit, otherwise 1
 */

int _isdigit(int c)
{
if (c >= '0' && c <= '9')
{
	return (1);
}
else
{
	return (0);
}
}
