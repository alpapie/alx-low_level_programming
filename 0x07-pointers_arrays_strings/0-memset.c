#include "main.h"
#include <stdio.h>
#include <string.h>

/**
 *_memset - returns the largest of 3 numbers
 * @s: first integer
 * @b: second integer
 * @n: third
 * Return: dest
 */

char *_memset(char *s, char b, unsigned int n)
{
memset(s, b, n);
return (s);
}