#include "main.h"
#include <stdlib.h>
/**
 * alloc_grid - 2 dimensional arry of integers
 * @width: width
 * @height: height
 * Return: pointer or null
 */
int **alloc_grid(int width, int height)
{
	int **dimens;
	int i, h, w;
	int *p;

	if (width <= 0 || height <= 0)
		return (NULL);
	dimens = malloc(sizeof(int) * height);
	if (dimens == NULL)
		return (NULL);
	for (i = 0; i < height; i++)
	{
		*(dimens + i) = malloc(sizeof(int) * width);
		if (*(dimens + i) == NULL)
		{
			for (i = 0; i < height; i++)
			{
				p = dimens[i];
				free(p);
			}
			free(dimens);
			return (NULL);
		}
	}
	for (h = 0; h < height; h++)
	{
		for (w = 0; w < width; w++)
			dimens[h][w] = 0;
	}
	return (dimens);
}
