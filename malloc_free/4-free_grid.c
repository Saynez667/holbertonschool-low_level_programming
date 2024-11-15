#include <stdlib.h>
/**
* free_grid - Frees a 2 dimensional grid previously created by alloc_grid.
* @grid: The address of the two dimensional grid.
* @height: The height of the grid.
*
* This function frees the memory allocated for each row of the grid
* and then frees the memory allocated for the array of pointers to the rows.
*/
void free_grid(int **grid, int height)
{
int i;
if (grid == NULL || height <= 0)
return;
for (i = 0; i < height; i++)
{
free(grid[i]);
}
free(grid);
}
