/**
 * _strchr - search for a char in a str
 * @s: the desired string
 * @c: the searvhed char
 * Return: a pointer or null
*/
char *_strchr(char *s, char c)
{
	unsigned int i = 0;

	while (s[i] != '\0')
	{
		if (s[i] == c)
			return (&(s[i]));
		i++;
	}
	return (NULL);
}
