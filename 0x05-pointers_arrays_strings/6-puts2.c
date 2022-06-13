#include "main.h"
#include <stdio.h>
#include <string.h>
/**
 * puts2 - returns the largest of 3 numbers
 * @str: first integer
 * Return: 1 if c is uppercase, 0 otherwise
 */

void puts2(char *str)
{
int i = 0;
int lenn = strlen(str);

for (; i >= 0; i++)
{
	if (str[i] == '\0')
	{
		break;
	}
	_putchar(str[i]);
	_putchar('\n');
}
}
