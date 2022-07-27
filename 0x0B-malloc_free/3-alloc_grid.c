#include "main.h"
#include <stdlib.h>

/**
 * alloc_grid - Allocates 2D array
 * @width: Width of array
 * @height: Width of array
 * Return: Either NULL of double pointer of 2D array
 */

int **alloc_grid(int width, int height)
{
	int i, j;
	int **arr;

	if (width == 0 || height == 0)
		return (NULL);

	if (width < 0 || height < 0)
		return (NULL);

	arr = malloc(height * sizeof(int *)); /* Allocate height */

	if (arr == NULL)
		return (NULL);

	for (i = 0; i < height; i++)
	{
		arr[i] = malloc(sizeof(int) * width); /* Allocate width space */
		if (arr[i] == NULL)
		{
			for (j = 0; j < i; j++)
				free(arr[j]); /* if null, free memory */
			free(arr);

			return (NULL);
		}
		for (j = 0; j < width; j++)
		{
			arr[i][j] = 0; /* Initialize all elements to 0 */
		}
	}

	return (arr);
}
