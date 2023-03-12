/**
 * _strchr - search for a char in a str
 * @s: the desired string
 * @c: the searvhed char
 * Return: a pointer or null
*/
char *_strchr(char *s, char c)
{
	int i = 0;

	for (; s[i] >= '\0'; i++)
	{
		if (s[i] == c)
			return (&s[i]);
	}
	return (0);
}

