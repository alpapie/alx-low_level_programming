#include "main.h"

/**
 * _islower - checks if the parameter is lowercase
 *@c: character to be checked by function
 * Description:
 * Return: Always(0) Success
 */

int _islower(int c)
{
if (c >= 97 && c <= 122)
{
	return (1);
}
else
{
	return (0);
}
}
