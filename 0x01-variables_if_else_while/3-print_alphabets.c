#include <stdlib.h>
/*
    * betty style doc for function main goes there
*/
int main(void)
{
    char cha='a';
    char chA='A';
    while(cha<='z' && chA<='Z')
    {
        putchar("%c", cha);
        putchar("%c", chA);
        cha++;
        chA++;
    }
    return (0);
}