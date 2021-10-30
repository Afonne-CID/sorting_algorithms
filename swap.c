#include "sort.h"

/**
 * swap - Swaps the position of two ints in an array
 * @int1: First int
 * @int2: Second int
 */
void swap(int *int1, int *int2)
{
	int tmp = *int1;
	*int1 = *int2;
	*int2 = tmp;
}
