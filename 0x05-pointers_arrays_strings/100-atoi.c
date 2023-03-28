#include <string.h>
#include "main.h"
#include <stdio.h>
/**
 * _atoi - convert a string to an integer.
 * @s : Source string to convert.
 * Return: int.
 */
int _atoi(char *s)
{
	int n = 100000000;
	int i = 0;
	int num = 0;
	int flag = 0;
	int minus = 1;

	while (s[i] != '\0')
	{
		if (s[i] == '-')
			minus = minus * -1;
		if (s[i] <= '9' && s[i] >= '0')
		{
			num = num + ((s[i] - '0') * n);
			n = n / 10;
			flag = 1;
		}
		if (flag == 1 && (s[i] > '9' || s[i] < '0'))
			break;
		i++;
	}
	if (n == 0)
		n = 1;
	else
		n = n * 10;
	return (minus * (num / n));
}
