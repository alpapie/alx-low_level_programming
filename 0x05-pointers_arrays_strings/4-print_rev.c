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
int i=strlen(s)-1;
char *reverse;
for (; i >= 0; i--)
{
	if (s[i] == '\0')
	{
        break;
	}
	puts(s[i]);
}
_putchar('\n');
}
