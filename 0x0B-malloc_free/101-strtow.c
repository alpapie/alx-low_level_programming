#include <stdlib.h>
#include <stdlib.h>
/**
 * shortf - char
 * @f: pointer to string params
 * @k:jhsh
 * @j:vvhuiii
 * Return: char
 */


int* shortf(char **f, int k, int j)
{
	for (k = j - 1; k >= 0; k--)
		free(f[k]);
	free(f);
	return (NULL);
}

/**
 * strtow - char
 * @str: pointer to string params
 * Return: char
 */

char **strtow(char *str)
{
	int i = 0, j = 0, k = 0, len = 0, count = 0;
	char **f, *col;

	if (!str || !*str)
		return (NULL);
	while (*(str + i))
	{
		if (*(str + i) != ' ')
		{
			if (*(str + i + 1) == ' ' || *(str + i + 1) == 0)
				count += 1;
		}
		i++;
	}
	if (count == 0)
		return (NULL);
	count += 1;
	f = malloc(sizeof(char *) * count);
	if (!f)
		return (NULL);
	i = 0;
	while (*str)
	{
		while (*str == ' ' && *str)
			str++;
		len = 0;
		while (*(str + len) != ' ' && *(str + len))
			len += 1;
		len += 1;
		col = malloc(sizeof(char) * len);
		if (!col)
		{
			shortf(f, k, j);
		}
		for (k = 0; k < (len - 1);  k++)
			*(col + k) = *(str++);
		*(col + k) = '\0';
		*(f + j) = col;
		if (j < (count - 1))
			j++;
	}
	*(f + j) = NULL;
	return (f);
} /*yes*/
