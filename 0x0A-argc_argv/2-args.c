#include "main.h"
/**
 * main - entry point func
 * @argc: counts
 * @argv: vars
 * Return: the returned value
*/
int main(int argc, char *argv[])

{
	int i;

	for (i = 0; i < argc; i++)
	{
		printf("%s\n", argv[i]);
	}
	return (0);

}
