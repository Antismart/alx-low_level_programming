#include "main.h"
/**
 *_puts - prints a string
 *@str: input string
 *Return: the length of the string
 */
void _puts(char *str)
{
	int i = 0;

 	while (str[i] != '\n')
	{
		_putchar(str[i]);
		i++;
	}
	_putchar('\n');
}
