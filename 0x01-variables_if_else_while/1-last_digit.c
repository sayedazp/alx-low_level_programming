#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/* more headers goes there */

/* betty style doc for function main goes there */
/**
 * main - the entry point function
 * Retrun - always 0
*/
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	/* your code goes there */
	int l = n%10;

	if(l > 5)
		printf("%d is %d and is greater than 5\n", n, l);
	else if(l == 0)
		printf("%d is %d and is 0\n", n, l);
	else
		printf("%d is %d and is less than 6 and not 0\n", n, l);
	return (0);
}
