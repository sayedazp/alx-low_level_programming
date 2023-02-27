#include "main.h"
/**
 * puts2 - prints a string to output a variation
 * @string: integner pointer as input
*/
void puts2(char *string)
{
	int i = 0;

	while (*(string + i) != '\0')
	{
		if (i % 2 == 0)
			_putchar(*(string + i));
		i++;
	}
	_putchar('\n');
}
