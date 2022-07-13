#include "main.h"

/**
 * _puts - print a string, followed by a new line
 * @str: the string to print
 *
 * Return: Always 0.
 */
void _puts(char *str)
{
	if (str)
	{
		while (*str)
			_putchar(*str++);
		_putchar('\n');
	}
}
