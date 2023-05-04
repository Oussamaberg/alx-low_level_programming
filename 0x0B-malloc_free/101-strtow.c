#include<stdlib.h>
#include<stdio.h>
#include<string.h>

/**
 * free_memo - free all allocated blocks.
 * @arr: pointer.
 * @n: the height
 * Return: void
 */

void alloc_word(int start, int end, char **s, char *str, int i)
{
	int size = end - start;
	int j;

	s[i] = malloc((size * sizeof(char) + 1));
	for (j = 0; j < size; j++)
		s[i][j] = str[j + start];
	s[i][j] = '\0';
}
/**
 * alloc_grid - returns a pointer to a 2
 * dimensional array of integers.
 * @width : parametre 1
 * @height : parametre2
 * Return: pointer
 */
char **strtow(char *str)
{
	char *p;
	char **s = &p;
	int size = strlen(str);
	int flag = 0;
	int start, end;
	int i;
	int j = 0;
	
	for(i = 0; i < size; i++)
	{
		if (str[i] != ' ' && str[i] != '\0')
		{
			if(flag == 0)
			{
				flag = 1;
				start = i;
			}
		
		}
		else
		{
			if(flag == 1)
			{
				end = i;
				flag = 0;
				alloc_word(start, end, s, str, j);
				j++;
			}
		}
	}
	s[j] = NULL;
	return (s);
}
