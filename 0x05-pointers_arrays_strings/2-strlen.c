
/**
 * _strlen -  returns the length of a string.
 * @s: The string to calculate the length.
 * Return: length of s.
 */
int _strlen(char *s)
{
	int i = 0;

	while (*(s + i) != '\0')
	{
		i++;
	}
	return (i);
}
