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
	int i1 = 0, i2 = 0;
	char *o;

	while (dest[i] != '\0')
		i++;
	while (src[d] != '\0')
		d++;
	o = (char *)malloc((i + d - 1) * sizeof(char));
	while (i1 < i)
	{
		o[i1] = dest[i1];
		i1++;
	}
	while (i2 < d)
	{
		o[i2 + i - 1] = src[i2];
		i2++;
	}
	o[i2 + i - 1] = '\0';
	return (o);

}
