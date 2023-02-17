#include <stdio.h>

/**
 * main - Entry point
 * Return: Always 0 (Success)
 */
int main(void)
{
	char cha;
	int in;
	long int lin;
	long long ll;
	float fl;

	printf("Size of a char: %lu byte(s)\n", (unsigned long)sizeof(cha));
	printf("Size of an int: %lu byte(s)\n", (unsigned long)sizeof(in));
	printf("Size of a long int: %lu byte(s)\n", (unsigned long)sizeof(lin));
	printf("Size of a long long int: %lu byte(s)\n", (unsigned long)sizeof(ll));
	printf("Size of a float: %lu byte(s)", (unsigned long)sizeof(fl));

    return (0);
}
