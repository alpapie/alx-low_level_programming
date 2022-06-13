#include "main.h"
#include <stdio.h>
#include <string.h>

/**
 * print_rev -reverse a string
 * @s: first integer
 * Return:void
 */

void print_rev(char *s)
{
int i = strlen(s) - 1;

for (; i >= 0; i--)
{
	if (s[i] == '\0')
	{
		break;
	}
	_putchar(s[i]);
}
_putchar('\n');
}
