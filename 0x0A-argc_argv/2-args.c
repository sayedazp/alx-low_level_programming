#include "main.h"
/**
 * main - entry point func
 * @argc: counts
 * @argv: vars
 * Return: the returned value
*/
int main(int argc, char *argv[])
{
	int i = 0;

	while (argc--)
	{
		while (argv[0][i] != '\0')
		{
			_putchar(argv[0][i]);
			i++;
		}
		_putchar('\n');
		}
	return (0);
}
