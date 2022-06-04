#include <stdlib.h>
#include <stdio.h>

/*
* betty style doc for function main goes there
*/
int main(void)
{
char cha = 'a';
while (cha <= 'z')
{
	putchar(cha);
	cha++;
}
putchar('\n');
return (0);
}
