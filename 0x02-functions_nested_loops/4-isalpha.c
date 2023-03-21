/**
 * _islower - checks for lowercase or uppercase character.
 * @c: the character to check.
 * Return: 1 if the character c is lowercase or upper.
 * 0 is returned if c is not an alphabetic character.
 */
int _islower(int c)
{
	if ((c <= 'z' && c >= 'a') || (c <= 'Z' && c >= 'A'))
		return (1);
	else
		return (0);

}
