#include <stdio.h>
#include <stdlib.h>

/**
 * alloc_grid - Allocates a 2D grid of integers.
 *
 * @width: Width of the grid.
 * @height: Height of the grid.
 *
 * Return: Pointer to the allocated 2D grid, or NULL on failure.
 */
 
int **alloc_grid(int width, int height)
{
    int i,j;
    int **grid = (int **)malloc(height * sizeof(int *));
    
    if (width <= 0 || height <= 0)
    {
        return (NULL);
    }
    if (grid == NULL)
    {
        return (NULL);
    }

    for (i = 0; i < height; i++)
    {
        grid[i] = (int *)malloc(width * sizeof(int));
        if (grid[i] == NULL)
        {
            for (j = 0; j < i; j++)
            {
                free(grid[j]);
            }
            free(grid);
            return (NULL);
        }

        for (j = 0; j < width; j++)
        {
            grid[i][j] = 0;
        }
    }

    return (grid);
}
