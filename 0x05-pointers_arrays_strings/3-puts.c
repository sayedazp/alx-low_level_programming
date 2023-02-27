#include "main.h"
/**
 * _puts - prints a string to output
 * @s: integer pointer as input
*/
void _puts(char *s)
{
	int i = 0;

	while (*(s + i) != '\0')
	{
		_putchar(*(s + i));
		i++;
	}
}
