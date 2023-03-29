#include <string.h>
#include "main.h"
#include <stdio.h>
/**
 * _strcmp - compaire s1 and s2..
 * @s1: first string.
 * @s2: second string.
 * Return: difference between the two strings.
 */
int _strcmp(char *s1, char *s2)
{
	int i = 0;
	int length;
	int cmp = 0;

	length = strlen(s1);
	if (strlen(s2) > strlen(s1))
		length = strlen(s2);
	while (i < length)
	{
		if (s1[i] != s2[i])
		{
			cmp = s1[i] - s2[i];
			break;
		}

		i++;
	}
	return (cmp);
}
