#include <stdio.h>
#include <stdlib.h>
#define ERR_MSG "Error"
/**
 * mystrcat - a func to concate
 * @s1: 1
 * @s2: 2
 */
void mystrcat(char *s1, char *s2)
{
	int length, j;

	length = 0;
	while (s1[length] != '\0')
		++length;
	for (j = 0; s2[j] != '\0'; ++j, ++length)
		s1[length] = s2[j];
	s1[length] = '\0';
}
/**
 * errors - an error func
 */
void errors(void)
{
	printf("Error\n");
	exit(98);
}
/**
 * main - entry point func
 * @argc: count
 * @argv: args
 * Return: return val
*/
int main(int argc, char *argv[])
{
	char *a = argv[1];
	char *b = argv[2];
	char *chara = "echo \"";
	char *char2 = " * ";
	char *char3 = "\" | bc | tr -d '\n' | sed 's/\\\\//g'";
	char *char1;
	int s = 0, z = 0, sum = 0;

	if (argc != 3)
		errors();
	while (*a != '\0')
	{
		if (!(*a >= '0' && *a <= '9'))
			errors();
		s++;
		a++;
	}
	a -= s;
	while (*b != '\0')
	{
		if (!(*b >= '0' && *b <= '9'))
			errors();
		z++;
		b++;
	}
	b -= z;
	sum = s + z + 1;
	char1 = malloc(sizeof(*char1) * (sum + 500));
	if (char1 == NULL)
		return (1);
	mystrcat(char1, chara);
	mystrcat(char1, a);
	mystrcat(char1, char2);
	mystrcat(char1, b);
	mystrcat(char1, char3);
	system(char1);
	printf("\n");
	free(char1);
	return (0);
}
