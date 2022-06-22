#include "main.h"
#include <stdio.h>
#include <string.h>

/**
 * _pow_recursion - ironnou
 * @x: pointer to char param
 * @y: allao
 * Return: *s
 */

int _pow_recursion(int x, int y)
{
if (y < 0)
{
	return (-1);
}
else if (y == 0)
{
	return (1);
}
else
{
	return (x * _pow_recursion(x,y - 1));
}
}
