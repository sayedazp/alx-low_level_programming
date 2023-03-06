/**
 * _memcpy - copy elements from src to dest
 * @dest: the desired destination
 * @src: the source to cpy from
 * @n: number of compied bytes
 * Return: returns a char pointer
*/
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i = 0;

	while (i < n || src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}
	return (dest);
}
