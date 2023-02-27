#include "main.h"
/**
 * _puts2 - prints a string to output a variation
 * @s: integer pointer as input
*/
void _puts2(char *s)
{
	int i = 0;

	while (*(s + i) != '\0')
	{
		if (i % 2 == 0)
			_putchar(*(s + i));
		i++;
	}
	_putchar('\n');
}
