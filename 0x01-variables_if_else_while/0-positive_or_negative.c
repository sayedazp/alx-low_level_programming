#include <stdlib.h>
#include <time.h>
/* more headers goes there */

/* betty style doc for function main goes there */
/**
 * main - returns 0 after execution
 * Return: zero
 */
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	/* your code goes there */
	if(n > 0)
		printf("%u is positive");
	else if(u == 0)
		printf("%u is zero");
	else
		printf("%u is negative");
	return (0);
}
