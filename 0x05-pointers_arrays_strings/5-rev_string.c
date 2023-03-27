#include <string.h>
#include "main.h"
/**
 * rev_string - reverses a string.
 * @s: The string to reverse.
 * Return: void.
 */
void rev_string(char *s)
{
	char c;
	int len_string = strlen(s);
	int j = 0;

	int i = len_string - 1;

	for (; i >= len_string / 2; i--)
	{
		c = s[i];
		s[i] = s[j];
		s[j] = c;
		j++;
	}
}
