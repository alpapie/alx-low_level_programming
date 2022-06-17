#include "main.h"

/**
 *_strncpy - returns the largest of 3 numbers
 * @dest: first integer
 * @src: second integer
 * @n: third integer
 * Return: n
 */

char *_strncpy(char *dest, char *src, int n)
{
int i;

for (i = 0; i < n && src[i] != '\0'; i++)
{
	dest[i] = src[i];
}
for (; i < n; i++)
{
	dest[i] = '\0';
}
return (dest);
}
