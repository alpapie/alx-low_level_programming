#include "main.h"
#include <stdio.h>
#include <string.h>

/**
 * _strstr - bytes
 * @haystack: pointer to char
 * @needle: pointer to char
 * Return: NULL
 */

char *_strstr(char *haystack, char *needle)
{
int i=0;

for (; i < strlen(haystack); i++)
{
    if (haystack[i] == needle)
    {
        return (&haystack[i]);
    }
    return (0);
}

}