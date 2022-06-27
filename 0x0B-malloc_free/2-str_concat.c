#include "main.h"
#include <stdlib.h>

/**
 *str_concat - joins two strings
 *@s1: first string
 *@s2: second string
 *
 * Return: pionter to string
 */

char *str_concat(char *s1, char *s2)
{
	int i, j, len1 = 0, len2 = 0;
	char *cpy;

	if (s1 == NULL)
		s1 = "";
	for (i = 0; s1[i]; i++)
		len1++;

	if (s2 == NULL)
		s2 = "";
	for (i = 0; s2[i]; i++)
		len2++;

	cpy = malloc((len1 + len2 + 1) * sizeof(char));
	if (cpy == NULL)
		return (NULL);
	for (i = 0; s1[i]; i++)
	{
		cpy[i] = s1[i];
	}

	for (j = 0; s2[j]; j++, i++)
	{
		cpy[i] = s2[j];
	}
	cpy[i] = '\0';
	return (cpy);
}
