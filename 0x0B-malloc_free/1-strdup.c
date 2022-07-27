#include "main.h"
#include <stdlib.h>

/**
 * _strdup - Copies a string and returns pointer
 * @str: String to be copied
 * Return: Either NULL or pointer to copied string
 */

char *_strdup(char *str)
{
	unsigned int i;
	char *p;
	unsigned int len = 0;

	if (str == NULL)
		return (NULL);

	while (str[len] != '\0')
	{
		len++;
	}

	p = malloc(len * sizeof(char) + 1); /* The allocated space */

	if (p == NULL)
		return (NULL);

	for (i = 0; i < len; i++)
	{
		p[i] = str[i]; /* Copies str into p */
	}

	return (p);
}
