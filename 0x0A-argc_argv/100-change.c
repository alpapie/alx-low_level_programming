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
int som = atoi(argv[1]), rendu = 0;

if (argc - 1 != 1)
{
	printf("Error\n");
	return (1);
}
if (som < 0)
{
	printf("%d\n",rendu) ;
	return (0);
}
else
{
	if (som >= 25)
	{
		rendu += som/25;
		som = som %25;
	}
	if (som >= 10)
	{
		rendu += som/10;
		som = som %10;
	}
	if (som >= 5)
	{
		rendu += som/5;
		som = som %5;
	}
	if (som >=2 )
	{
		rendu += som/2;
		som = som %2;
	}
	if (som >= 1 )
	{
		rendu += som/1;
	}
}
printf("%d\n",rendu);
return (0);
}
