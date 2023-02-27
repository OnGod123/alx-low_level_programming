#include "main.h"

/**
 * swap_int -  function that swaps the values of two integers
 * @a: first swap pointer
 * @b: second swap pointer
 */

void swap_int(int *a, int *b)
{
	int c = *a;

	int d = *b;


	*a = d;
	*b = c;
}
