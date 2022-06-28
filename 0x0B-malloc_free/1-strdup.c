#include <stdio.h>
#include <stdlib.h>

/**
 * main - prints its name, followed by a new line
 * @argc: n args
 * @argv: arr args
 * Return: 0
 */

char *_strdup(char *str)
{
    char *p;
    unsigned int i;

    if (str == NULL)
    return (0);
    p = malloc((_strlen(str) + 1) * sizeof(char));
    if (p == NULL)
    return (0);
    for (i = 0; str[i] != '\0'; i++)
    {
        p[i] = str[i];
    }
    p[i] = '\0';
    return (p);
}
