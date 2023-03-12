#include <unistd.h>
/**
 * _putchar - write chars to dtdout
 * @c: char to print
 * Return: 1 when success
*/
int _putchar(char c)
{
	return (write(1, &c, 1));
}
