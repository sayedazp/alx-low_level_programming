#include "main.h"
/**
 * more_numbers - print numbers from 1 to 14 ten times !
*/

void more_numbers(void)
{
	int a = 48, b = 48, c = 0;

	while (c <= 9)
	{
		a = 48;
		while (a < 50)
		{
			b = 48;
			while (b < 58)
			{
				if (a != 48)
				{
					if (b == 53)
						break;
					_putchar(a);
				}
				_putchar(b);
				b++;
			}
			a++;
		}
	_putchar('\n');
	c++;
	}
}
