#include <stdlib.h>
/**
 * argstostr - concatenates all the arguments of your program
 * @ac: argument count
 * @av: argument vector
 * Return: char
 */
char *argstostr(int ac, char **av)
{
	char *ar, *str;
	int i, j, count = 0;

	if (ac == 0 || av == NULL)
		return (NULL);
	for (i = 0; i < ac; i++)
	{
		j = 0;
		while (av[i][j] != '\0')
		{
			j++;
			count++;
		}
		count++;
	}
	count += 1;
	ar = malloc(count * sizeof(char));
	if (ar == NULL)
		return (NULL);
	str = ar;
	for (i = 0; i < ac; i++)
	{
		j = 0;
		while (av[i][j] != '\0')
		{
			*ar = av[i][j];
			j++;
			ar++;
		}
		*ar = '\n';
		ar++;
	}
	return (str);
}