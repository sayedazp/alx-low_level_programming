/**
 * _strcpy - strcpy clone
 * @dest: destin var
 * @src: src var
 * Return: the return value
*/
char *_strcpy(char *dest, char *src)
{
	int i = 0;

	while (src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}
