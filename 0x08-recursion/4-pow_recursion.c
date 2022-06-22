#include "main.h"
#include <stdio.h>
#include <string.h>

/**
 * _pow_recursion - ironnou
 * @s: pointer to char param
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
	return (1)
}
else
{
    int powe=0;
    
	return (x * _pow_recursion(x,y - 1))
}
}
