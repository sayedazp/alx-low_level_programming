#include "main.h"
#include <unistd.h>
void _putchar(char *c)
{
	write(1, c, 9);	
}
int main(void)
{
	_putchar("_putchar\n");
	return 0;
}
