#include <stdio.h>

void _print_rev_recursion(char *s)
{
if (*s)
{
	
	putchar(*s);
}
}

int  main() {
char *s="alpapire is the bos";

	_print_rev_recursion(s);

}

