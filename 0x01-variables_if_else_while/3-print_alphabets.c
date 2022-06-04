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
char cha = 'a';
char chA = 'A';

while (cha <= 'z')
{
        putchar( cha);
        cha++;
    }
while (cha <= 'Z') 
{
	putchar( chA);
	chA++;
}
putchar('\n');
return (0);
}
