#include <stdio.h>
/***/

int main(void)
{
	int prev = 1, prevv = 0 , c = 0 , current;

	while (c  < 98)
	{
		current = prev + prevv;
		prevv = prev;
		prev = current;
		c++;

		printf("%d, ", current);
	}
	printf("\n");
	return (0);
}
