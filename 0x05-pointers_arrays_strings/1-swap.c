#include "main.h"

/**
 *swap_int - swabs the value of two integers;
 *
 * @a: integers to swab;
 * @b: integers to swab;
 *
 * return - 0
 */

void swap_int(int *a, int *b)
{
	int temp;
	temp = a;
	a = b;
	b = temp;
}
