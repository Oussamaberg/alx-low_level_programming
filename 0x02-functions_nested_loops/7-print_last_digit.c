#include "main.h"

/**
 * print_last_digit - print the last digit of a given number.
 * @n: the number to compute the last digit.
 * Return: value of the last digit,
 */
int print_last_digit(int n)
{

	int last_digit;

	last_digit = (n % 10);
	_print(last_digit + '0');
	return (last_digit);

}
