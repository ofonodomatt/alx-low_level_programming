#include "main.h"
#include <stdlib.h>

/**
 * str_concat - Concatenates 2 strinsgs
 * @s1: String 1
 * @s2: String 2
 * Return: Either null or pointer to concatenated string
 */

char *str_concat(char *s1, char *s2)
{
	int len1, len2, j, total_len;
	char *p;

	if (s1 == NULL)
	{
		len1 = 0;
	}
	else
	{
		for (len1 = 0; s1[len1]; len1++)
			;
	}

	if (s2 == NULL)
	{
		len2 = 0;
	}
	else
	{
		for (len2 = 0; s2[len2]; len2++)
			;
	}
	total_len = len1 + len2 + 1; /* total len plus 1 */
	p = malloc(sizeof(char) * total_len);
	if (p == NULL)
		return (NULL);

	/* Assign s1 to new string */
	for (j = 0; j < len1; j++)
	{
		p[j] = s1[j];
	}
	/* Assign second string to p */
	for (j = 0; j < len2; j++)
	{
		p[len1 + j] = s2[j];
	}
	*p += '\0';
	return (p);
}
