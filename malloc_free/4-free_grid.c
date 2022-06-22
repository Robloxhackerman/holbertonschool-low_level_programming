#include "main.h"
#include <stdlib.h>
 /**
  * free_grid -frees a 2 dimensional grid previously
  * created by your alloc_grid function
  *
  * @grid: grid to free
  * @height: hieght
  *
  * Return: nothing
  */
void free_grid(int **grid, int height)
{
	int PEPE;

	if (grid == NULL || height <= 0)
	{
		return;
	}

	for (PEPE = 0; height > PEPE; PEPE++)
	{
		free(grid[PEPE]);
	}

	free(grid);
}
