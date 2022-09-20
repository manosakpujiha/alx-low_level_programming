#include "main.h"

/**
 * swap_int - swap two integers
 * @a: parameter
 * @b: parameter 2
 */

void swap_int(int *a, int *b)
{
	int tmp = *a;
	*a = *b;
	*b = tmp;
}
