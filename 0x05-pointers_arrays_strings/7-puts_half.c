#include "main.h"
#include <stdio.h>
#include <string.h>
/**
 * puts_half - returns the largest of 3 numbers
 * @str: first integer
 * Return: 1 if c is uppercase, 0 otherwise
 */

void puts_half(char *str)
{
int i = strlen(str) / 2 ,lenn = strlen(str);

if (i%2!=0)
{
	i = i + 1;
}
for (; i < lenn; i++)
{
	_putchar(str[i]);
}
_putchar('\n');
}
