#include "main.h"
#include <stdlib.h>
/**
 * alloc_grid - nested loop to make grid
 * @width: width input
 * @height: height input
 * Return: pointer to 2 dim. array
 */
int **alloc_grid(int width, int height)
{
	int **hii;
	int n, m;

	if (width <= 0 || height <= 0)
		return (NULL);

	hii = malloc(sizeof(int *) * height);

	if (hii == NULL)
		return (NULL);

	for (n = 0; n < height; n++)
	{
		hii[n] = malloc(sizeof(int) * width);

		if (hii[n] == NULL)
		{
			for (; n >= 0; n--)
				free(hii[n]);

			free(hii);
			return (NULL);
		}
	}

	for (n = 0; n < height; n++)
	{
		for (m = 0; m < width; m++)
			hii[n][m] = 0;
	}

	return (hii);
}
