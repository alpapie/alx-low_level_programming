#include "main.h"

/**
 * _isupper - returns the largest of 3 numbers
 * @c: first integer
 * Return: 1 if c is uppercase, 0 otherwise
 */

int _isupper(int c)
{
if (c >= 'A' && c <= 'Z')
	return (1);
else
	return (0);
}
