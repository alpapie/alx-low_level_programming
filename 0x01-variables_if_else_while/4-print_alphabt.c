#include <stdlib.h>
#include <stdio.h>

/**
* main - to tell if a random number is either - or +  
*   
*n is the random integer  
*  
*Return: the integer  
*/
int main(void)
{
char cha = 'a';

while(cha <= 'z' && cha != 'e' && cha != 'q')
{
	putchar( cha);
        cha++;
}
return (0);
}
