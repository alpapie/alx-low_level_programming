#include "main.h"

/**
 *_strchr - returns the largest of
 * @s: first integer
 * @c: second integer
 * Return: dest
 */

char *_strpbrk(char *s, char *accept)
{
int i;

while (*s)
{
    for (i = 0; accept[i]; i++)
    {
        if (*s == accept[i])
        {
            return (s);
        }
    }
    s++;
}
return (NULL);
}