#include <stdlib.h>
#include <stdio.h>

/**
* betty style doc for function main goes there
*/
int main(void)
{
char cha = 'a';
char chA = 'A';

while(cha <= 'z' && chA <= 'Z')
{
	putchar( cha);
        putchar( chA);
        cha++;
        chA++;
    }
putchar('\n');
return (0);
}
