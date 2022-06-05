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
char i ;

for (i='0'; i <= '9' ; i++)
{
	putchar(i);
}
for (i='a'; i <= 'f' ; i++)
{
	putchar(i);
}
printf("\n");
return (0);
}
