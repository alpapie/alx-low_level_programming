#include "main.h"

/**
 *leet - returns the largest of 3 numbers
 * @str: first integer
 * Return: n
 */

char *leet(char *str)
{
int i, j;
char str1[] = "aAeEoOtTlL";
char str2[] = "4433007711";

i = 0;

for  (; str[i] != '\0'; ++i)
{
	for (j = 0; j <= 9; ++j)
	{
		if (str1[j] == str[i])
			str[i] = str2[j];
	}
}
return (str);
}
