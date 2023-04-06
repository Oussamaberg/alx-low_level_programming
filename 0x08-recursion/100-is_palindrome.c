#include<stdio.h>
#include<string.h>
/**
 * palindrome - returns 1 if a string is a palindrome and 0 if not.
 * @s: pointer to the beguinin of the string.
 * @s_end: point to the end
 *
 * Return: 1 if palindrome.
 * 0 if it's not.
 */
int palindrome(char *s, char *s_end)
{
	if (s_end > s)
	{
		if (*s == *(s_end))
		{
			palindrome(s + 1, s_end - 1);
		}
		else
		{
			return (0);
		}
	}
	else
		return (1);
	return (0);
}
/**
 *  is_palindrome - returns 1 if a string is a palindrome and 0 if not.
 * @s: a string.
 *
 * Return: 1 if palindrome 0 if it's not.
 */
int is_palindrome(char *s)
{
	char *s_end;

	s_end = s + strlen(s) - 1;
		return (palindrome(s, s_end));
}
