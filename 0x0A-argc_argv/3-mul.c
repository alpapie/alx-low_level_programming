#include <stdio.h>
#include <stdlib.h>

/**
 * main - prints its name, followed by a new line
 * @argc: n args
 * @argv: arr args
 * Return: 0
 */

int main(int argc, char *argv[])
{
int mult;

if (argc - 1 >= 2)
{
	mult = atoi(argv[1]) * atoi(argv[2]);
    printf("%d\n", mult);
}
else
{
	printf("Error");
	return (1);
}
return (0);
}
