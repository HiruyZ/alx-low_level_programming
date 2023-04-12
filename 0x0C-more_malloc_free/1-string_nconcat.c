#include "main.h"
/**
 * _strlen - returns the length of a string
 * @s: the string
 *
 * Return: amount of chars in string, in this use unsigned int
 */

int _strlen(char *s)
{
	int length = 0;

	for (; *s; s++)
	{
		length++;
	}
	return (length);
}

/**
 * string_nconcat - concatenates two strings, result contains
 * @s1: first string
 * @s2: second string
 * @n: amount of bytes in s2
 *
 * Return: pointer to the concatenated string, or NULL
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	int length1;
	int length2;
	int sign_n = n;
	int i;
	char *concatstr;

	if (s1 == NULL)
		length1 = 0;
	else
		length1 = _strlen(s1);

	if (s2 == NULL)
		length2 = 0;
	else if (sign_n > _strlen(s2))
		length2 = _strlen(s2);
	else
		length2 = n;

	concatstr = malloc(sizeof(char) * ((length1 + length2) + 1));

	if (concatstr == NULL)
		return (NULL);

	for (i = 0; i < length1; i++)
	{
		concatstr[i] = s1[i];
	}
	for (i = 0; i < length2; i++)
	{
		concatstr[length1 + i] = s2[i];
	}

	concatstr[length1 + length2] = '\0';

	return (concatstr);
}
