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
int i = 0;

for (; i < n; i++)
{
printf("%d", a[i]);
printf(", ");
}
printf("\n");
}
