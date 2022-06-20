#include "main.h"

/**
 *_memset - returns the largest of 3 numbers
 * @s: first integer
 * @b: second integer
 * @n: third
 * Return: s
 */

char *_memset(char *s, char b, unsigned int n)
{
unsigned int i;

for (i = 0; i < n; i++)
    s[i] = b;
return (s);
}