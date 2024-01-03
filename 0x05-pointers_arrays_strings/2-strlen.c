#include "main.h"
/**
 *_strlen - returns the length of a string
 *@s: input string
 *Return: Length of string
 */
int _strlen(char *s)
{
	int length = 0;

	for (; *s++;)
		length++;
	return (length);
}
