#include <stdlib.h>
/*
    * betty style doc for function main goes there
*/
int main(void)
{
    char cha='z';
    while(cha>='a')
    {
        putchar("%c", cha);
        cha--;
    }
    return (0);
}