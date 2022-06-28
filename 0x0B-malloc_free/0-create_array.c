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
	char *p;
	unsigned int i;

	if (size == 0)
	return (0);
	p = malloc((size) * sizeof(char));
	if (p == NULL)
	return (0);
	for (i = 0; i < size; i++)
	{
		p[i] = c;
	}
return (p);
}
