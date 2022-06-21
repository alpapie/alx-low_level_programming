#include "main.h"

/**
 *_strchr - returns the largest of
 * @s: first integer
 * @c: second integer
 * Return: dest
 */

char *_strchr(char *s, char c)
{
int i;

for (i = 0; s[i] != '\0'; i++)
{
	if (s[i] == c)
	{
		return (&s[i]);
	}
	return (NULL);
}

}
