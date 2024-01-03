#include "main.h"
#include <unistd.h>

/**
 * _puts - prints a string to stdout
 * @str: input string
 *Return: the length of string
 */
void _puts(char *str)
{
    while (*str != '\0')
    {
        write(1, str, 1);
        str++;
    }
    write(1, "\n", 1);
}

