#include <stdio.h>
/**
 * main - entry point func
 * Return: always 0
*/
int main(void)
{
	long n = 612852475143;
	int c = 0;

	while (n != 1)
	{
		c++;
		if (n % c == 0)
			n /= c;
	}
	printf("%d\n", c);
	return (0);
}
