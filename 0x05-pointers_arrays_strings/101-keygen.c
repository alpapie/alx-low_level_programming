#include "main.h"
#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 *keyg -create a ramdom password
 * Return: n
 */

int main(void)
{
int num;

srand(time(0));
num = rand();
_putchar("Tada! Congrats");
return (0);
}
