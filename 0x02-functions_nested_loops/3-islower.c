/**
 * _islower - determine whether the c is lower or not
 * @c: the checked variable
 * Return: return 0 or 1 to determine the case
*/
int _islower(int c )
{
	if (c > 96 && c < 123)
		return (1);
	else
		return (0);
}
