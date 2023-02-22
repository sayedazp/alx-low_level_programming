#include <stdio.h>
/**
 * main - entry point func
 * Return: always 0
*/

int main(void)
{
	long prev = 1, prevv = 0, current = 0, sum;

	while (current <= 4000000)
	{
		current = prev + prevv;
		prevv = prev;
		prev = current;
		if (current % 2 == 0)
			sum += current;
	}
	printf("%ld\n", sum);
	return (0);
}
