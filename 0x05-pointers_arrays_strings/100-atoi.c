#include "main.h"
#include <stdio.h>
#include <string.h>
/**
 * _atoi - returns the largest of 3 numbers
 * @s: first integer
 * Return:int

int _atoi(char *s)
{
int sign = 1;
unsigned int num = 0;

do {

	if (*s == '-')
	{
		sign *= -1;
	}
	else if (*s >= '0' && *s <= '9')
	{
		num = (num * 10) + (*s - '0');
	}
	else if (num > 0)
	{
		break;
	}
} while (*s++);
return (num * sign);
}
