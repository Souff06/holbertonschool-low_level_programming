#include "main.h"
/**
 * free_grid - liberer le malloc
 * @grid: le double pointeur
 * @height: la hauteur qui repres les colonnes
*/

void free_grid(int **grid, int height)
{
	(void) height;
	free(grid);
}
