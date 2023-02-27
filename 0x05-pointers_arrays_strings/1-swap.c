#include "main.h"

/**
  * swap_int - Swaps the values of two integers.
  * @a: first integer -a swaps with b
  * @b: second integer -b swaps with a
  */

void swap_int(int *a, int *b)
{
	int none; /*used as a temp storage space and empty*/

	none = *a;
	*a = *b;
	*b = none;
}
