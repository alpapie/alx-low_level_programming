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
strcat(dest, src[n]);
return (dest);
}
