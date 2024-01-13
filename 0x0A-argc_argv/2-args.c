#include "main.h"

/**
 * main -  prints each word in a sentence to a new line
 * @argc: argument count
 * @argv: argument velocity
 * Return: Always 0, Success
 */

int main(int argc, char *argv[])
{
	int i;

	for (i = 0; i < argc; i++)
	{
		printf("%s\n", argv[i]);
	}

	return (0);
}
