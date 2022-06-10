#include <stdio.h>

int main(void)
{
int i=1, j,nbr , size=19;
if (size > 0)
{
    for (; i <= size ; i++)
    {
		nbr=size - i;
        while ( nbr >= 1)
        {
            putchar(' ');
        	nbr--;
        }
        j=0;
        while (j < i)
        {
            putchar('#');
		    j++;
        }
	putchar('\n');
    }
}
else
{
    putchar('\n');
}
	
}
