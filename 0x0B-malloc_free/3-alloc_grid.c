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
	int i, **ptr;

	if (width <= 0 || height <= 0)
		return (NULL);

	ptr = (int **)malloc(height * sizeof(int *));
	if (!ptr)
	{
		free(ptr);
		return (NULL);
	}

	i = 0;
	while (i < height)
	{
		ptr[i] = (int *)calloc(width, sizeof(int));
		if (!ptr[i])
		{
			while (i - 1 >= 0)
				free(ptr[i--]);

			free(ptr);
			return (NULL);
		}

		i++;
	}

	return (ptr);
}
