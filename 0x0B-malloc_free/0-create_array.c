#include <stdio.h>
#include <stdlib.h>

/**
 * main - prints its name, followed by a new line
 * @argc: n args
 * @argv: arr args
 * Return: 0
 */

char *create_array(unsigned int size, char c)
{
if (size == 0)
{
	return (NULL);
}
else
{
	return malloc(size * sizeof(char));
}
}
