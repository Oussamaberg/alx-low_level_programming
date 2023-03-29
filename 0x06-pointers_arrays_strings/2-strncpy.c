#include <string.h>
#include "main.h"
#include <stdio.h>
/**
 * _strncpy - copy src in dest.
 * @dest: destination string.
 * @src: source string.
 * @n: number of characters to add from src.
 * Return: dest + n src.
 */
char *_strncpy(char *dest, char *src, int n)
{
	int i = 0;
	int src_length;

	src_length = strlen(src);
	while (i < src_length && i < n)
	{
		dest[i] = src[i];
		i++;
	}
	if (i == src_length)
		dest[i] = '\0';
	return (dest);
}
