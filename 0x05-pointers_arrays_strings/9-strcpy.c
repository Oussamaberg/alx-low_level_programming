#include <string.h>
#include "main.h"
#include <stdio.h>
/**
 * _strcpy - t copies the string pointed to by src,
 * including the terminating null byte (\0),
 * to the buffer pointed to by dest.
 * @src : Source string.
 * @dest: Destination string.
 * Return: dest string.
 */
char *_strcpy(char *dest, char *src)
{
	int i = 0;

	while (1)
	{
		dest[i] = src[i];
		i++;
		if (src[i] == '\0')
			break;

	}
	return (dest);
}

