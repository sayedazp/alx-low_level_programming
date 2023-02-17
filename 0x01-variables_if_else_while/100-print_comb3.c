#include <stdio.h>
/**
 * main - entry point func
 * Return: always zero
*/
int main(void)
{
	int n = 48;
	int i = n + 1;

	for (; n < 58; n++)
	{
		for (i = n + 1; i < 58; i++)
		{
			putchar(n);
			putchar(i);
			if (n != 56 || i != 57)
			{
				putchar(',');
				putchar(' ');	
			}
		}
	}
	putchar('\n');
	return (0);
}
