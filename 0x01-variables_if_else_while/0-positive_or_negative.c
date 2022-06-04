#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - to tell if a random number is either - or +
 *
 * n is the random integer
 *
 * Return: the integer
 */
int main(void)
{
int n;

srand(time(0));
n = rand() - RAND_MAX / 2;
if (n > 0)
	printf("%d is positive\n", n);
else if (n == 0)
	printf("%d is zero\n", n);
else
	printf("%d is negative\n", n);
return (0);
}
