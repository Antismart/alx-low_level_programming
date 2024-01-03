#include "main.h"
/**
 *print_rev - Prints a string in reverse
 *@s: The input string
 *Return: 0
 */
void print_rev(char *s)
{
	int len = 0;

	/* Calculate the length of the string */
	while (s[len] != '0')
		len++;

	/*Print the string in reverse */
	for (len--; len >= 0; len--)
		_putchar(s[len]);

	_putchar('\n');
}
