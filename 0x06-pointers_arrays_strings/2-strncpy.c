/**
 * _strncpy - a function that concats a string to another
 * @dest: the destination string to append
 * @src: the src string to append
 * @n: number of concated bytes
 * Return: the return is a pointer to the appended string
*/

char *_strncpy(char *dest, char *src, int n)
{
	int d = 0;
	int i = 0;

	while (d < n)
	{
		if (dest[d] == '\0')
			i = 1;
		dest[d] = src[d];
		d++;
	}
	if (i == 1)
	{
		dest[d] = '\0';
	}
	return (dest);

}
