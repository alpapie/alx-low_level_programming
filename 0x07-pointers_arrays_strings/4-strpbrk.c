#include "main.h"

/**
 *_strpbrk - returns the largest of
 * @s: first integer
 * @accept: second integer
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