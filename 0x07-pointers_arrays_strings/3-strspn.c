#include "main.h"

/**
 *_strspn - returns the largest of
 * @s: first integer
 * @accept: second integer
 * Return: dest
 */

unsigned int _strspn(char *s, char *accept)
{
unsigned int i, j, k;

for (i = 0; s[i] != '\0'; i++)
{
    for (j = 0; accept[j] != '\0'; j++)
    {
        if (s[i] == accept[j])
        {
            break;
        }
    }
    if (accept[j] == '\0')
    {
        break;
    }
}
return (i);
}