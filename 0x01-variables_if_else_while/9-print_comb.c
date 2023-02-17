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
		if (n != 57)
		{
			putchar(n);
			putchar(',');
			putchar(' ');
		}
		else
			putchar(n);
	}
	putchar('\n');
	return (0);
}
