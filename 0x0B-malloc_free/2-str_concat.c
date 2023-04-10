#include "main.h"

/**
 * str_concat - concatenate two strings
 * @s1: a pointer to the first string
 * @s2: a pointer to the second string
 *
 * Return: NULL if memory allocation fails,
 * otherwise a pointer to a the new string
 */
char *str_concat(char *s1, char *s2)
{
	int length1 = 0;
	int length2 = 0;
	char *cat;

	if (s1)
	{
		while (s1[length1])
			++length1;
	}
	else
	{
		s1 = "";
	}
	if (s2)
	{
		while (s2[length2])
			++length2;
	}
	else
	{
		s2 = "";
	}

	cat = (char *) malloc(sizeof(char) * (length1 + length2 + 1));

	if (!cat)
		return (NULL);
	if (s1)
	{
		for (length1 = 0; s1[length1]; ++length1)
			cat[length1] = s1[length1];
	}
	if (s2)
	{
		for (length2 = 0; s2[length2]; ++length2)
			cat[length1 + length2] = s2[length2];
	}
	cat[length1 + length2] = '\0';
	return (cat);
}
