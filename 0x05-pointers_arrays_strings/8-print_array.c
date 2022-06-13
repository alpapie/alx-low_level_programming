#include "main.h"
#include <stdio.h>
#include <string.h>
/**
 * print_array - returns the largest of 3 numbers
 * @a: first integer
 * @n: second integer
 * Return: 1 if c is uppercase, 0 otherwise
 */

void print_array(int *a, int n)
{
int arra[n], i = 0;

for (; i < n; i++)
{
_putchar("%d", a[i]);
_putchar(', ')
}
_putchar('\n');
}
