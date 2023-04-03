#include <string.h>
#include "main.h"
#include <stdio.h>
/**
 * _strpbrk - searches a string for any of a set of bytes.
 * @s: string.
 * @accept: string.
 * Return: s.
 */
char *_strpbrk(char *s, char *accept)
{
	int i = 0;
	int j;
	int s_len = strlen(s);
	int accept_len = strlen(accept);

	for (; i < s_len; i++)
	{
		j = 0;
		for (; j < accept_len; j++)
		{
			if (accept[j] == s[i])
				return (s + i);
		}
	}
	return (NULL);
}
