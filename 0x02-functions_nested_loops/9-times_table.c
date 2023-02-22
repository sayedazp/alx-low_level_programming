#include "main.h"
void times_table(void)
{
	int a = 0, b = 0, prod;
	
	while (a <= 9)
	{
		b = 0;

		while (b <= 9)
		{
			prod = a * b;
			if (a != 0)
			{
				_putchar(prod >= 10 ? (prod/10)%10 + '0' : ' ');
			}	
			_putchar(prod%10 + '0');
			if (b != 9)
				_putchar(',');
			_putchar(' ');
			b++;
			
		}
		_putchar('\n');
		a++;
	}
}
