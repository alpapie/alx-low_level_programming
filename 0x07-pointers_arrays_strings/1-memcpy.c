#include "main.h"
#include <stdio.h>
#include <string.h>

/**
 *_memcpy - returns the largest of
 * @dest: first integer
 * @src: second integer
 * @n: third integer
 * Return: dest
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
unsigned int i;

for (i = 0; i < n; i++)
{
	dest[i] = src[i];
}
return (dest);
}
