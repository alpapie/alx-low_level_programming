#include "main.h"

/**
 *rot13 - returns the largest of 3 numbers
 * @str: first integer
 * Return: n
 */

char *rot13(char *str)
{
int i = 0;
int k;

char alphabet[] =  "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
char s1[] = "NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm";

while (str[i] != '\0')
{
	for (k = 0; k < 52; k++)
	{
		if (str[i] == alphabet[k])
		{
			str[i] = s1[k];
		}
	}
	i++;
}
return (str);
}
