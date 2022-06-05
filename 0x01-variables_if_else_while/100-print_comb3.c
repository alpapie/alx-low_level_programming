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
int number1='0';

for (number = '0'; number <= '9'; number++)
{
		number1++;
        while ( number1 <= '9')
		{
			putchar(number);
			putchar(number1);
			if (number == '9' && number1 == '9')
			{
				break;
			}
			else
			{
				putchar(',');
				putchar(' ');
			}
            number1++;
		}
}
putchar('\n');
return (0);
}
