#include "main.h"
#include <stdio.h>
#include <string.h>

/**
 *_strcmp - returns the largest of 3 numbers
 * @s1: first integer
 * @s2: second integer
 * Return: 0 if equal, 1 if s1 > s2, -1 if s1 < s2
 */

int _strcmp(char *s1, char *s2)
{
int result;

result = strcmp(s1,s2);
return (result);
}
