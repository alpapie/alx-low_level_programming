#include "main.h"

/**
 *reverse_array - returns the largest of 3 numbers
 * @a: first integer
 * @n: second integer
 * Return: n
 */

void reverse_array(int *a, int n)
{
int i, j;
int temp;

for (i = 0, j = n - 1; i < j; i++, j--)
{
	temp = a[i];
	a[i] = a[j];
	a[j] = temp;
}
}
