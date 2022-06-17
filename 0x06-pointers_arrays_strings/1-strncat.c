#include "main.h"
#include <stdio.h>
#include <string.h>

/**
 *_strncat - returns the largest of 3 numbers
 * @dest: first integer
 * @src: second integer
 * @n: third integer
 * Return: dest
 */

char *_strncat(char *dest, char *src, int n)
{
int i, j;
char *p;

p = dest;

for (i = 0; dest[i] != '\0'; i++)
{
	;
}

for (j = 0; j < n && src[j] != '\0'; j++)
{
	dest[i + j] = src[j];
}
dest[i + j] = '\0';

return (p);
}
