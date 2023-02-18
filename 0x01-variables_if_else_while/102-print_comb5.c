#include <stdio.h>
/**
 * main - entry point func
 * Return: always zero
*/
int main(void)
{
	int n = 48;
	int i = n ;
	int j = 48;
	int k = j ;

	for (; n < 58; n++)
	{
		i = 48;
		for (; i < 58; i++)
		{
			j = n;
			k = i + 1;
			for (; j<58; j++)
			{
				for(; k < 58; k++)
				{
					putchar(n);
					putchar(i);
					putchar(' ');
					putchar(j);
					putchar(k);
					if (n != 57 || i != 56 || j != 57 || k != 57)
					{
					putchar(',');
					putchar(' ');
					}
				}
				k = 48;
			
			}
		}
	}

	putchar('\n');
	return (0);
}
