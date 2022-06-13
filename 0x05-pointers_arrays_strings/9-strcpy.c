#include "main.h"
#include <stdio.h>
#include <string.h>
/**
 * _strcpy - returns the largest of 3 numbers
 * @src: first integer
 * @dest: second integer
 * Return: 1 if c is uppercase, 0 otherwise
 */

char *_strcpy(char *dest, char *src)
{
int i;

for (i = 0; src[i]; i++)
{
	dest[i] = src[i];
}
dest[i] = src[i];
return (dest);
}
