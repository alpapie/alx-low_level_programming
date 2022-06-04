#include <stdlib.h>
/*
    * betty style doc for function main goes there
*/
int main(void)
{
    char cha='a';
    while(cha<='z' && cha!='e' && cha!='q')
    {
        putchar("%c", cha);
        cha++;
    }
    return (0);
}