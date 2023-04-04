#include <string.h>
#include "main.h"
#include <stdio.h>
/**
 * _strstr - searches a string for any of a set of bytes.
 * @haystack: string.
 * @needle: string.
 * Return: string.
 */
char *_strstr(char *haystack, char *needle)
{
	int i = 0;
	int j;
	int index = 100000;
	int hay_len = strlen(haystack);
	int needle_len = strlen(needle);

	for (; i < hay_len; i++)
	{
		j = 0;
		if (haystack[i] == needle[j] && (i + needle_len) < hay_len)
		{
			for (; j < needle_len; j++)
			{
				if (haystack[i + j] == needle[j])
					index = i;
				else
				{
					index = 100000;
					break;
				}
			}
		}
		if (index != 100000)
			return ((haystack + index));
	}
	return (NULL);
}
