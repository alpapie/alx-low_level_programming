#include "main.h"
#include <stdio.h>
#include <string.h>

/**
 * _print_rev_recursion - ironnou
 * @s: pointer to char param
 * Return: *s
 */
void _print_rev_recursion(char *s)
{
if (*s == '\0')
{
	_print_rev_recursion('\n');
}
else
{
	_putchar(*s);
	_print_rev_recursion(s - 1);
}

}
