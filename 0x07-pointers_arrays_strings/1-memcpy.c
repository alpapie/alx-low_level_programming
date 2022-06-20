#include "main.h"
#include <stdio.h>
#include <string.h>

/**
 *_strcat - returns the largest of 3 numbers
 * @dest: first integer
 * @src: second integer
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
