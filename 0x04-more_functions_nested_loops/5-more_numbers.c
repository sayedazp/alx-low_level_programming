#include "main.h"
/**
 * more numbers - print numbers from 1 to 14 ten times !
*/

void more_numbers(void)
{
	int a = 0, b = 0, c = 0;

	while (c <= 9)
	{
		c = 0;
		while (a < 2)
		{
			b = 0;
			while (b < 10)
			{
				if (a != 0)
				{
					if (b == 5)
						break;
					_putchar(a + '0');
				}
				_putchar(b + '0');
				b++;
			}
			a++;
		}
	_putchar('\n');
	c++;
	}
}
