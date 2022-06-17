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

for (; str[i] != '\0'; i++)
{
	for (k = 0; k <= 51; k++)
	{
		if (alphabet[k] == str[i])
			str[i] = s1[k];
	}
}
return (str);
}
