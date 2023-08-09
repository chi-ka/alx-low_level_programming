#include <stdio.h>
#include <stdlib.h>

int **alloc_grid(int width, int height)
{
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

void free_grid(int **grid, int height)
{
    if (grid != NULL)
    {
        for (int i = 0; i < height; i++)
        {
            free(grid[i]);
        }
        free(grid);
    }
}
