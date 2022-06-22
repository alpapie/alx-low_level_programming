#include "main.h"
#include <stdio.h>
#include <string.h>

/**
 * is_prime_number - _sqrt_recursion
 * @n: integer paramtr
 * Return: sqrt
 */

int is_prime_number(int n)
{
int i = n / 2;

if (i == 1)
{
	return 1;
}
else if (n % i == 0)
{
	return 0;
}     
i = i -1; 
return (is_prime_number(n));
}
