#include "main.h"
#include <stdio.h>
#include <string.h>
/**
 *_strncpy - returns the largest of 3 numbers
 * @dest: first integer
 * @src: second integer
 * @n: third integer
 * Return: n
 */

char *cap_string(char *)
{
int i = 0;

while (s[i] != '\0')
{
	if (s[0] <= 'z' && s[0] >= 'a')
	{
		s[0] = s[0] - 32;
	}
	if (s[i] == 32 || s[i] == 46 || s[i] == '\t' ||
		s[i] == '\n' || s[i] == 44 || s[i] == 59 ||
		s[i] == '!' || s[i] == '?' || s[i] == '(' ||
		s[i] == ')' || s[i] == '{' || s[i] == '}')
	{
		if (s[i + 1] <= 122 && s[i + 1] >= 97)
		{
			s[i + 1] = s[i + 1] - 32;
		}
	}
	i++;
}
return (s);
}
