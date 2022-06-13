#include "main.h"
#include <stdio.h>
#include <string.h>
/**
 * puts2 - returns the largest of 3 numbers
 * @str: first integer
 * Return: 1 if c is uppercase, 0 otherwise
 */

int _atoi(char *s)
{
int i = 0, n = 0;
int sign = 1;

while (s[i] == ' ' || (s[i] >= '\t' && s[i] <= '\r'))
	i++;
if (s[i] == '-')
{
	sign = -1;
	i++;
}
else if (s[i] == '+')
	i++;
while (s[i] >= '0' && s[i] <= '9')
{
	n = n * 10 + (s[i] - '0');
	i++;
}
return (n * sign);
}
