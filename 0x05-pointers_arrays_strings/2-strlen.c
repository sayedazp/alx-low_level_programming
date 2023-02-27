/**
 * _strlen - computes string length func
 * @s: integer pointer as input
 * Return: return line numbers
*/
int _strlen(char *s)
{
	int i = 0, c = 0;

	while (*(s + i) != '\0')
	{
		c++;
		i++;
	}
	return (c);
}
