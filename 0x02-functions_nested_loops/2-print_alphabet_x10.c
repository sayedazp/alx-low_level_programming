#include "main.h"
/**
 * print_alphabet_x10 - printing alphabet 10 times
 * Return: no return
*/
void print_alphabet_x10(void)
{
	int n = 0;

	while (n <= 9)
	{
		char c = 'a';
	
		while (c != 'z' + 1)
		{
			_putchar(c);
			c++;
		}
		_putchar('\n');
		n++;
	}
}
