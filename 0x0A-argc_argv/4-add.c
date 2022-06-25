#include <stdio.h>
#include <stdlib.h>

/**
 * main - prints all arguments it receives
 * @argc: n args
 * @argv: arr args
 * Return: 0
 */
int main(int argc, char *argv[])
{
int i = 1, sum = 0;

for (; i < argc -1; i++)
{
    if (atoi(arg[i]))
    {
        sum += atoi(arg[i])
    }
    else
    {
        printf("Error\n");
		return (1);
    }
}
return (sum);
}
