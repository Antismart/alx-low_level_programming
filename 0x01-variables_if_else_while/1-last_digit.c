#include <stdlib.h>
#include <stdio.h>
#include <time.h>

/**
* main Entry point of our  code
* outputs last digit and confirms if is > 5, < 6 or  zero
* Return; Always 0.
*/

int main(void)

{
	int n;
	int last;

	srand(time(0));
	n = rand() - RAND_MAX / 2;

	/* my code goes here */
	last = n % 10;
	if (last > 5)
		printf("Last digit of %d is %d and is greater than 5\n", n, last);
	else if (last < 6 && last != 0)
	{
		printf("Last digit of %d is %d and is less than 6 and not 0\n", n, last);
	}
	else
		printf("Last digit of %d is %d and is 0\n", n, last);

	return (0);
}
