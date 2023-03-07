/**
 * _strstr - fancy string finder
 * @haystack: searched str
 * @needle: searchfor string
 * Retuen: returns a char pointer
*/
char *_strstr(char *haystack, char *needle)
{
	unsigned int i = 0, n = 0;

	while (haystack[i] != '\0')
	{
		if (haystack[i] == needle[0])
		{
			n = 0;
			while (haystack[i + n] == needle[n] && haystack[i + n] != '\0')
			{
				if (needle[n + 1] == '\0')
					return (&haystack[i]);
				n++;
			}
		}
		i++;
	}
	return (NULL);
}
