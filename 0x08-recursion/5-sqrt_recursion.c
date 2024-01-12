#include "main.h"

/**
 * _sqrt_recursion - Returns the natural square root of a number.
 * @n: The number to find the square root of.
 *
 * Return: The square root of n, or -1 if n does not have a natural square root.
 */
int _sqrt_recursion(int n)
{
    	if (n < 0)
        	return -1;
    	return find_square_root(n, 1);
}

/**
 * find_square_root - Helper function to recursively find the square root.
 * @n: The number to find the square root of.
 * @guess: The current guess for the square root.
 *
 * Return: The square root of n, or -1 if n does not have a natural square root.
 */
int find_square_root(int n, int guess)
{
    	if (guess * guess == n)
        	return guess;
    	if (guess * guess > n)
        	return -1;  /* n does not have a natural square root */
    	return find_square_root(n, guess + 1);
}

