#include "main.h"
#include <ctype.h>
#include <string.h>

/**
 * string_toupper - returns the largest of 3 numbers
 * @s: first integer
 * Return: char
 */

char *string_toupper(char *s)
{
int i;

for (i = 0; s[i] != '\0'; i++)
	s[i] = toupper(s[i]);
return (s);
}
