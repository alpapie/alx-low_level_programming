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
int i=strlen(s);

for (i=strlen(s); i>0; i--)
{
    _putchar(s[i]);
}
_putchar('\n');
}
