#include <stdio.h>
/**
 * main - entry point func
 * Return: always zero
*/
int main(void)
{
	int n = 48;

	for (; n < 58; n++)
	{
		putchar(n);
	}
	for (n = 97; n < 103; n++)
	{
		putchar(n);
	}
	putchar('\n');
	return (0);
}
