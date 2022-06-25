#include <stdio.h>
#include <stdlib.h>

/**
 * main - function
 * @argc: offset count
 * @argv: offset value
 * Return: 0
 */

int main(int argc, char *argv[])
{
int i;

for (i = 0; i < argc; i++)
{
	printf("%d\n", i)
}
return (0);
}
