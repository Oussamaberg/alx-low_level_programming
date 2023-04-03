#include <string.h>
#include "main.h"
#include <stdio.h>
/**
 * _strchr - locates a char in a string.
 * @s: string.
 * @c: char.
 * Return: s or NULL.
 */
char *_strchr(char *s, char c)
{
	int i = 0;
	int s_len = strlen(s);

	for (; i < s_len; i++)
	{
		if (*(s + i) == c)
			return ((s + i));
	}
	return (NULL);
}
