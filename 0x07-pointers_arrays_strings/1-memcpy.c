#include <string.h>
#include "main.h"
#include <stdio.h>
/**
 * _memcpy - copies memory area.
 * @src: source.
 * @dest: destination.
 * @n: size.
 * Return: src.
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i = 0;

	for (; i < n; i++)
	{
		*(dest + i) = *(src + i);
	}
	return (dest);
}
