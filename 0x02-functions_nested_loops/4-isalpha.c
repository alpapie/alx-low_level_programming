#include "main.h"

/**
 * _isalpha - checks if the parameter is alphabet
 *@c: character to be checked by function
 * Description:
 * Return: Always(0) Success
 */

int _isalpha(int c)
{
if (c >= 64 && c <= 122)
{
	return (1);
}
else
{
	return (0);
}
}
