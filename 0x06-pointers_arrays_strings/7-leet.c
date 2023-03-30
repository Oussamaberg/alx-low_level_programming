#include <string.h>
#include "main.h"
#include <stdio.h>
/**
 * leet - encodes a string into 1337.
 * @s: string.
 * Return: s.
 */
char *leet(char *s)
{
	int i = 0;
	int j;
	int number_array[5] = {4, 3, 0, 7, 1};
	char lettre_array[5] = {'A', 'E', 'O', 'T', 'L'};

	while (s[i] != '\0')
	{
		j = 0;
		for (; j < 5 ; j++)
		{
			if (s[i] == lettre_array[j] || s[i] == (lettre_array[j] + 32))
			{
				s[i] = number_array[j] + '0';
				break;
			}
		}
		i++;
	}
	return (s);
}
