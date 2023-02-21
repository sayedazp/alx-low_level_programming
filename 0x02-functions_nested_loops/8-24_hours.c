/**
 * jack_bauer - prints every minute
*/

#include "main.h"

void jack_bauer(void)
{
	int a, b, c, d;

	a = 0;

	while (a <= 2)
	{
		b = 0;

		while ((!(b > 3 && a == 2)) && (b <= 9))
		{
			c = 0;

			while (c <= 5)
			{
				d = 0;

				while (d <= 9)
				{
					_putchar('0' + a);
					_putchar('0' + b);
					_putchar(':');
					_putchar('0' + c);
					_putchar('0' + d);
					_putchar('\n');
					d++;
				}
				c++;
			}
			b++;

		}
		a++;

	}

}
