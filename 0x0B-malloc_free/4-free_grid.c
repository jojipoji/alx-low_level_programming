#include"main.h"
#include<stdlib.h>
/**
 *free_grid - a function to free a two dimensional grid
 *@height: dimension to be used
 *@grid: grid to be checked
 *Return: 0
 */
void free_grid(int **grid, int height)
{
int i;
for (i = 0; i < height; i++)
{
free(grid[i]);
}
free(grid);
}
