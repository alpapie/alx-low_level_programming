#include <stdio.h>
#include <stdlib.h>

/**
 * create_array - prints its name, followed by a new line
 * @c: n args
 * @size: arr args
 * Return: 0
 */

char *create_array(unsigned int size, char c)
{
if (size == 0)
	return (NULL);
char *p = malloc(size * sizeof(char));
if (p == '\0')
	return (NULL);
for (int i = 0; i < size; i++)
{
	p[i] = c;
}
return c;
}
