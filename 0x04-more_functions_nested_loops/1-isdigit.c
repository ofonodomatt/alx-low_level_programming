#include "main.h"

/**
 * _isdigit - check if character is a digit
 * @c: an character to check
 *
 * Return: 1 if c is a digit,
 * 0 otherwise.
 */
int _isdigit(int c)
{
	if (c >= '0' && c <= '9')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
