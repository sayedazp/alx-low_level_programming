/**
 * puts_half - reverse a string
 * @s: char pointer as input
*/
void puts_half(char *s)
{
	int i = 0, c = 0;

	while (*(s + i) != '\0')
	{
		c++;
		i++;
	}
	if (c % 2 == 0)
		i = c / 2;
	else
		i = ((c - 1) / 2) + 1;
	while (i <= c)
	{
		_putchar(*(s + i));
		i++;
	}
}
