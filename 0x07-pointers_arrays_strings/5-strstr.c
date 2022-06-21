#include "main.h"

/**
 * _strstr - bytes
 * @haystack: pointer to char
 * @needle: pointer to char
 * Return: NULL
 */

char *_strstr(char *haystack, char *needle)
{
int i=0;

char *result = haystack, *fneedle = needle;

while (*haystack)
{
    while (*needle)
    {
        if (*haystack++ != *needle++)
        {
            break;
        }
    }
    if (!*needle)
    {
        return (result);
    }
    needle = fneedle;
    result++;
    haystack = result;
}
return (0);

}
