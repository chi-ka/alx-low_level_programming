#!/usr/bin/python3
'''
Gets the perimiter of an island
'''
def island_perimeter(grid):
    '''
    Gets the perimiter of an island
    '''
    build_island = 0
    for island in grid:
        for landzone in island:
            if landzone == 1:
                build_island += 1
    
    if build_island == 1:
        return 4
    elif build_island == 2:
        return 6
    elif build_island > 2:
        return (6 + ( (build_island - 2) * 2))
