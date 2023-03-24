#include "main.h"

/**
 * _isdigit -  checks a character c if it is a digit or not.
 * @c: c -  Variable
 * Return: Always 0.
 */
int _isdigit(int c)
{

	if (c >= '0' && c <= '9')
	{
		return (1);
	}
	return (0);
}
