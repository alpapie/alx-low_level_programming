#include "main.h"

/**
 *_strchr - returns the largest of
 * @s: first integer
 * @c: second integer
 * Return: dest
 */

char *_strchr(char *s, char c)
{
	while (*s != '\0')
	{
		if (*s == c)
		{
			return (s);
		}
		s++;
	}
	if (*s == c)
	{
		return (s);
	}
return (0);
}
