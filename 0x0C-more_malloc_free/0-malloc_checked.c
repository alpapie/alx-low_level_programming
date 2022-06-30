#include <stdio.h>
#include <stdlib.h>

/**
 * malloc_checked - prints its name, followed by a new line
 * @b: n args
 * Return: 0
 */

void *malloc_checked(unsigned int b)
{
void *p;

p = malloc(b);
if (p == NULL)
	exit(98);
return (p);
}
