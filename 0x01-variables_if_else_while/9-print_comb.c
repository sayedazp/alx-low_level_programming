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
		if (n != 57)
		{
			putchar(',');
			putchar(' ');
		}
	}
	putchar('\n');
	return (0);
}
