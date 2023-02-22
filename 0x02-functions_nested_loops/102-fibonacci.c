#include <stdio.h>
/**
 * mian - entry point func
 * Return: always 0
*/

int main(void)
{
	long prev = 1, prevv = 0 , c = 0 , current;

	while (c  < 50)
	{
		current = prev + prevv;
		prevv = prev;
		prev = current;
		c++;

		printf("%ld, ", current);
	}
	printf("\n");
	return (0);
}
