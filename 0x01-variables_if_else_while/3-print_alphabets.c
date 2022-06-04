#include <stdlib.h>
#include <stdio.h>

/**
* betty style doc for function main goes there
*/
int main(void)
{
char cha = 'a';
char chA = 'A';

while(cha <= 'z')
{
        putchar( cha);
        cha++;
    }
while(cha <= 'z') 
{
	putchar( chA);
	chA++;
}
putchar('\n');
return (0);
}
