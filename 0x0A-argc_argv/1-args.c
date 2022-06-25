#include <stdio.h>
#include <stdlib.h>

/**
 * main - function
 * @argc: offset count
 * @argv: offset value
 * Return: 0
 */

int main(int argc, char *argv[]__attribute__((unused)))
{
int i;

if ( argc > 0)
{
	printf("%d\n", argc - 1);
}

return (0);
}
