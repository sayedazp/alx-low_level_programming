#include <stdio.h>
/**
 * main - entry point func
 * Return: always retun 0 after execution
*/
int main(void)
{
	int c = 0;
	int sum = 0;

	while (c < 1024)
	{
		if (c % 3 == 0 || c % 5 == 0)
		{
			sum += c;
		}
		c++;

	}
	printf("%d\n", sum);
	return (0);
}
