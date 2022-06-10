#include "main.h"

/**
 * print_line - Print line dependent on the input
 * @n : The number of '_' characters
 * Return: Void.
 */

void print_triangle(int size)
{
int i=0, j=1, nbr;
if (size > 0)
{
    for (;i <= size ;i++)
    {

        while (size -j > 0)
        {
            _putchar(' ')
        }
        while (j < size)
        {
             _putchar('#')
        }
    }
    _putchar('\n');
}
else
{
    _putchar('\n');
}
}
