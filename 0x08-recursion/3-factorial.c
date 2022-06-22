#include "main.h"
#include <stdio.h>
#include <string.h>

/**
 *factorial - ironnou
 * @n: pointer to char param
 * Return: *s
 */

int factorial(int n)
{
if (n == 0)
{
	return (1);
}
else if (n < 0)
{
	return (-1);
}
else
{
	return (n * factorial (n - 1));
}
}
