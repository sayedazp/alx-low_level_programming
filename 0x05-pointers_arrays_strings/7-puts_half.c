#include "main.h"
/**
 * puts_half - reverse a string
 * @string: char pointer as input
*/
void puts_half(char *string)
{
	int i = 0, c = 0;

	while (*(string + i) != '\0')
	{
		c++;
		i++;
	}
	if (c % 2 == 0)
		i = c / 2;
	else
		i = ((c - 1) / 2) + 1;
	while (i <= c)
	{
		_putchar(*(string + i));
		i++;
	}
	_putchar('\n');
}
