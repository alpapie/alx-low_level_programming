#include "main.h"

/** 
*print_alphabet_x10 - prints all aphabets in lowercase
*  
*10X :  
*  
*/

void print_alphabet_x10(void)
{
int i = 1;

for ( ; i <= 10 ; i++)
{
	char cha = 'a';

	while (cha <= 'z')
	{
		_putchar(cha);
		cha++;
	}
	_putchar('\n');
}
}
