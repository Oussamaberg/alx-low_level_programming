#include<stdlib.h>
#include<stdio.h>
#include<string.h>

/**
 * free_memo - free all allocated blocks.
 * @arr: pointer.
 * @n: the height
 * Return: void
 */

void free_memo(int n, int **arr)
{
	int i = 0;

	while (i < n)
	{
		free(arr[i]);
		i++;
	}
	free(arr);
}
/**
 * alloc_grid - returns a pointer to a 2
 * dimensional array of integers.
 * @width : parametre 1
 * @height : parametre2
 * Return: pointer
 */
int **alloc_grid(int width, int height)
{

	int **arr;
	int i, j;


	if (width <= 0 || height <= 0)
		return (NULL);
	arr = (int **)malloc(height * sizeof(int *));
	if (arr == NULL)
		return (NULL);
	for (i = 0; i < height; i++)
	{
		arr[i] = (int *)malloc(width * sizeof(int));
		if (arr[i] == NULL)
		{
			free_memo(height, arr);
			return (NULL);
		}

		for (j = 0; j < width; j++)
			arr[i][j] = 0;
	}
	for (i = 0; j < height; i++)
		for (j = 0; j < width; j++)
			arr[i][j] = 0;
	return (arr);

}
