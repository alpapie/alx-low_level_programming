#include "main.h"
#include <stdio.h>
#include <string.h>

/**
 * rev_string - returns the largest of 3 numbers
 * @s: first integer
 * Return: 1 if c is uppercase, 0 otherwise
 */

void rev_string(char *s)
{
int i, j, temp;

i = 0;
j = strlen(s) - 1;
while (i < j)
{
	temp = s[i];
	s[i] = s[j];
	s[j] = temp;
	i++;
	j--;
}
}
