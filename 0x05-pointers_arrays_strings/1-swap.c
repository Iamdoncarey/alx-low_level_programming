#include "main.h"

/**
* swap_int -> given two integers swap the value
* @a: parameter 1
* @b: parameter 2
*/
void swap_int(int *a, int *b)
{
	int n;

	n = *a;
	*a = *b;
	*b = n;
}
