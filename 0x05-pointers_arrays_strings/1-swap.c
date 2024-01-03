#include "main.h"
/**
 *swap_int - Swaps the value of two integers
 *@a: First integer
 *@b: Second integer
 *Return 0
 */
void swap_int(int *a, int *b)
{
	int temp = *a;
	*a = *b;
	*b = temp;
}
