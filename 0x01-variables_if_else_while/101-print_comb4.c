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
int number0 = '0';
int number1;
int number2;

for (number = '0'; number <= '9'; number++)
{
	number1 = number0 + 1;
	while (number1 <= '9')
	{
        number2 = number1 + 1;
        while (number2 <= '9')
        {
            putchar(number);
            putchar(number1);
            putchar(number2);
            if (number == '8' && number1 == '9')
            {
                break;
            }
            else
            {
                putchar(',');
                putchar(' ');
            }
            number2++;
        }
	    number1++;
	}
    number0++;
}
putchar('\n');
return (0);
}
