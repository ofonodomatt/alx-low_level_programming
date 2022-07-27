#include "main.h"
#include <stdlib.h>

/**
 * create_array - Creates an array of chars
 * @size: Size of array
 * @c: The bytes of char to be added to array
 * Return: The pointer or NULL
 */

char *create_array(unsigned int size, char c)
{
	unsigned int i;
	char *m;

	m = malloc((sizeof(char) * size)); /*allocates size of bytes */

	if (m == NULL)
		return (NULL);
	for (i = 0; i < size; i++)
	{
		m[i] = c; /*Adds element of c into this pointer */
	}

	if (size == 0)
		return (NULL);
	else
		return (m);
}
