/**
 * _strcat - a function that appends a string to another
 * @dest: the destination string to append
 * @src: the src string to append
 * Return: the return is a pointer to the appended string
*/

char *_strcat(char *dest, char *src)
{
	int d = 0;
	int i = 0;

	while (++i)
	{
		if (dest[i] == '\0')
		{
			while (src[d] != '\0')
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
