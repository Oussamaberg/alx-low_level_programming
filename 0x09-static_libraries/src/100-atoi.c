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
	int start;
	int num = 0;
	int minus = 1;
	int i = 0;
	int n = 1;
	int flag = 0;

	while (s[i] != '\0')
	{
		if (s[i] == '-')
			minus = minus * -1;
		if ((s[i] <= '9' && s[i] >= '0') && flag == 0)
		{
			start = i;
			flag = 1;
		}
		if (flag == 1 && (s[i] > '9' || s[i] < '0'))
			break;
		i++;
	}
	i--;
	if (flag == 1)
		for (; i >= start; i--)
		{
			num = num + (s[i] - '0') * n * minus;
			if (n < 1000000000)
				n = n * 10;
		}
	return (num);
}
