#include <stdio.h>
/**
 * main - the entry point function
 * Return: always 0
*/
int main(void)
{
	char c = 'a';
	
	while (c != 'z' + 1)
	{
		putchar(c);
		c++;
	}
	putchar('\n');
	return (0);
}
