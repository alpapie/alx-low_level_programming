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
int nlast;

srand(time(0));
n = rand() - RAND_MAX / 2;
nlast = n % 10;
if(nlast > 5)
	printf("Last digit of %d is %d and is greater than 5\n",n, nlast);
else if (nlast == 0)
        printf("Last digit of %d is %d and is 0\n", n, nlast);
else if (nlast < 6 && nlast != 0)
        printf("Last digit of %d is %d and is less than 6 and not 0\n", n, nlast);
return (0);
}
