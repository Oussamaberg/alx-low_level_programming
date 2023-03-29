#include <string.h>
#include "main.h"

/**
 * cap_string - Write a function that capitalizes all words of a string.
 * @s: string.
 * Return: s.
 */
char *cap_string(char *s)
{
	int i = 0;
	int is_space = 1;

	while (s[i] != '\0')
	{
		if (is_space == 1)
		{
			if (s[i] >= 'a' && s[i] <= 'z')
			{
				s[i] = s[i] - 32;
			}
		is_space = 0;
		}
		if (s[i] == ' ' || s[i] == '.' || s[i] == '\n' || s[i] == '\t')
			is_space = 1;
		i++;
	}
	return (s);
}
