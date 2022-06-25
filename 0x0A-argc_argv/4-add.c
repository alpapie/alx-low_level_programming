#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * main - prints all arguments it receives
 * @argc: n args
 * @argv: arr args
 * Return: 0
 */

int main(int argc, char *argv[])
{
int i = 1, sum = 0;

for (; i <= argc -1; i++)
{
    if (atoi(argv[i]))
    {
        sum += atoi(argv[i]);
    }
    else
    {
        printf("Error\n");
		return (1);
    }
}
if (sum > 0)
{
    printf("%d\n", sum);
    return (0);
}
return (0);
}
