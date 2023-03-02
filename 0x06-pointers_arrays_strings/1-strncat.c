/**
 * _strncat - a function that concats a string to another
 * @dest: the destination string to append
 * @src: the src string to append
 * @n: number of concated bytes
 * Return: the return is a pointer to the appended string
*/

char *_strncat(char *dest, char *src, int n)
{
	int d = 0;
	int i = 0;

	while (++i)
	{
		if (dest[i] == '\0')
		{
			while (d < n)
			{
				dest[i + d] = src[d];
				d++;
			}
			break;
		}
		continue;
	}
	dest[i + d] = '\0';
	return (dest);

}
