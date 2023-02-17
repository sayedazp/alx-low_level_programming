#include <stdio.h>
/**
 * main - entry point func
 * Return: always zero
*/
int main(void)
{
	int n = 48;
	int i = n + 1;
	int z = i + 1;
	
	for (; n < 58; n++)
	{
		for (i = n + 1; i < 58; i++)
		{
			for (z = i + 1; z < 58 ; z++)
			{
				putchar(n);
				putchar(i);
				putchar(z);
				if (n != 55 || i != 56 || z != 57)
				{
					putchar(',');
					putchar(' ');
				}
			}
		}
	}
	putchar('\n');
	return (0);
}
