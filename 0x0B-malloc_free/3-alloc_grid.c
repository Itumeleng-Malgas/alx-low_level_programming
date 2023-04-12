#include "main.h"
#include <stdlib.h>

/**
* alloc_grid - returns a pointer to a 2 dimensional array of integers
* @width: int size width
* @height: int size height
* Return: 2D array of integers
*/

int **alloc_grid(int width, int height)
{
	int i, j, **ptr;

	if (width <= 0 || height <= 0)
		return (NULL);

	ptr = (int **)malloc(height * sizeof(int *));
	if (!ptr)
		return (NULL);

	i = 0;
	while (i < height)
	{
		ptr[i] = (int *)calloc(width, sizeof(int));
		if (!ptr[i])
		{
			j = 0;
			while (j < i)
			{
				free(ptr[j]);
				j++;
			}
			free(ptr);
			return (NULL);
		}

		i++;
	}

	return (ptr);
}
