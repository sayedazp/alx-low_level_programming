#include "main.h"
/**
 * times_table - crazy func
*/
void print_times_table(int n)
{
	int a = 0, b = 0, prod;

	while (a <= n)
	{
		b = 0;

		while (b <= n)
		{
			prod = a * b;
			if (b != 0)
			{
				_putchar(prod >= 100 ? (prod/100) % 10 + '0' : ' ');
				_putchar(prod >= 10 ? (prod / 10) % 10 + '0' : ' ');
			}
			_putchar(prod % 10 + '0');
			if (b != n)
				_putchar(',');
			if (b != n)
				_putchar(' ');
			b++;

		}
		_putchar('\n');
		a++;
	}
}
