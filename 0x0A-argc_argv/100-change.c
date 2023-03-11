#include "main.h"
#include <stdlib.h>
#include <stdio.h>
/**
 * remainderr - entry func
 * @num: num
 * @cnt: args
 * Return: return val
*/
int remainderr(int num, int cnt)
{
	int remainder;
	int tmp;

	if (num == 0)
		return (cnt);
	if (num <= 0)
	{
		return (0);
	}
	if (num < 2)
	{
		tmp = num / 1;
		remainder = (num % 1);
		cnt += tmp;
	}
	else if (num < 5 && num >= 2)
	{
		tmp = num / 2;
		remainder = (num % 2);
		cnt += tmp;
	}
	else if (num < 10 && num >= 5)
	{
		tmp = num / 5;
		remainder = (num % 5);
		cnt += tmp;
	}
	else if (num < 25 && num >= 10)
	{
		tmp = num / 10;
		remainder = (num % 10);
		cnt += tmp;
	}
	else
	{
		tmp = num / 25;
		remainder = (num % 25);
		cnt += tmp;
	}
	return (remainderr(remainder, cnt));
}
/**
 * main - entry func
 * @argc: num
 * @argv: args
 * Return: return val
*/
int main(int argc, char *argv[])
{
	int x, cnt;

	if (argc == 2)
	{
		x = atoi(argv[1]);
		cnt = 0;
		printf("%d\n", remainderr(x, cnt));
		return (0);
	}
	printf("Error\n");
	return (1);
}
