#include <stdlib.h>
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
char cha = 'z';

while (cha >= 'a')
{
	putchar(cha);
	cha--;
}
putchar('\n');
return (0);
}
