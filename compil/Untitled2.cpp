#include <stdio.h>

int main(void)
{
int i = 1, n=3;

if (n > 0)
{
	while (i <= n)
	{
		int j = 1;

		while (j < i)
		{
			putchar(' ');
			j++;
		}
		putchar('\\');
		putchar('\n');
		i++;
	}
}
putchar('\n');
	
}
