#include <stdio.h>
#include <stdarg.h>
#include "variadic_functions.h"

/**
 * sum_them_all - check the code for Holberton School students.
 *
 * @n: is an integer param
 *
 * Return: Always 0.
 */

int sum_them_all(const unsigned int n, ...)
{
int sum = 0;
if (n == 0)
{
return 0;
}

va_list args;
va_start(args, n);
for (unsigned int i = 0; i < n; i++)
{
    sum += va_arg(args, int);
}
va_end(args);
return sum;
}
