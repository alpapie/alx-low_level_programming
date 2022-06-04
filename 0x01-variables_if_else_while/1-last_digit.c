#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/* more headers goes there 
*jsjsjdjjjdjjsjd
* betty style doc for function main goes there 
*/
int main(void)
{
int n;
int nlast
srand(time(0));
n = rand() - RAND_MAX / 2;
nlast=n%10;
if(nlast > 5)
	printf("Last digit of %d is %d  and is greater than 5\n",nlast, n);
else if (nlast == 0)
        printf("Last digit of %d is %d and is 0\n",nlast, n);
else if (nlast < 6 && last != 0)
        printf("Last digit of %d is %d and is less than 6 and not 0n",nlast, n);
return (0);
}
