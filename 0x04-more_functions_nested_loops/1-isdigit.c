/**
 * _isdigit - determine if input is digit or not
 * @c: the checked input
 * Return: either 0 or 1
*/
int _isdigit(int c)
{
	if (c >= 48 && c <= 57)
		return (1);
	else
		return (0);
}
