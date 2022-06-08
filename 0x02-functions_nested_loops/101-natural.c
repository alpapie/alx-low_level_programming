#include <stdio.h>

/**
 * main - prints the sum of all products of 3 or 5 within 1024
 * Return: 0
 */

int main(void)
{
	int i;
	int sum_product = 0;

	for (i = 0; i < 1024; i++)
	{
		if (i % 3 == 0)
		{
			sum_product += i;
		}
		else if (i % 5 == 0)
		{
			sum_product += i;
		}
	}
	printf("%d\n", sum_product);
	return (0);
}
