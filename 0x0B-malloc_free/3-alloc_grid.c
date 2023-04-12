#include "main.h"
#include <stdlib.h>
#include <string.h>

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
			while (i--)
			{
				for (j = 0;j < width; j++)
					free(ptr[i]++);
			}

			free(ptr);
			return (NULL);
		}

		i++;
	}

	for (

	return (ptr);
}
