#include <stdio.h>
/**
 * main - entry point func
 * Return: always 0
*/

int main(void)
{
	unsigned long prev = 1, prevv = 0, c = 0, current;

	while (c  < 97)
	{
		current = prev + prevv;
		prevv = prev;
		prev = current;

		if (c < 96)
			printf("%lu, ", current);
		else
			printf("%lu", current);
		c++;
	}
	printf("\n");
	return (0);
}
