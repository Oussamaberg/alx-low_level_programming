/**
 * _islower - checks for lowercase character.
 * @c: the character to check.
 * Return: 1 if the character c is lowercase.
 * 0 is returned if c is an uppercase.
 */
int _islower(int c)
{
	if (c <= 'z' && c >= 'a')
		return (1);
	else
		return (0);

}
