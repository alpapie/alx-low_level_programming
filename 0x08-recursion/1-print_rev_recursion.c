#include "main.h"
#include <stdio.h>
#include <string.h>

/**
 * _puts_recursion - ironnou
 * @s: pointer to char param
 * Return: *s
 */
void _puts_recursion(char *s)
{
if (*s == '\0')
{
	_putchar('\n');
}
else
{
	_putchar(*s);
	_puts_recursion(s - 1);
}

}
