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
int i = 0;

if (argc - 1 > 2)
{
	return (atoi(argv[1]) * atoi(argv[2]));
}
printf("Error");
return (1);
}
