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
	int t = 0;

	while (argc--)
	{
		while (argv[t][i] != '\0')
		{
			_putchar(argv[t][i]);
			i++;
		}
		_putchar('\n');
		}
	t++;
	return (0);
}
