#include <stdio.h>

/**
 * main - outputs decimal numbers to 9
 * with space and comma.
 *
 *
 *
 * Return: the integer(0 success)
 */

int main(void)
{
int number;

for (number = '0'; number <= '9'; number++)
{
	putchar(number);
	if (number != '9')
	{
		putchar(',');
		putchar(' ');
	}
}
putchar('\n');
return (0);
}
