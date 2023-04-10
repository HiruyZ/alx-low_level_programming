#include "main.h"

/**
 * _isspc - check if a character is whitespace
 * @c: the character to check
 *
 * Return: 1 is c is a whitespace character, otherwise 0
 */
int _isspc(int c)
{
	if (c == 0x20 || (c >= 0x09 && c <= 0x0d))
		return (1);
	return (0);
}


/**
 * strtow - string into words
 * @str: a pointer to the string
 *
 * Return: NULL if memory allocation fails or if str is NULL or empty (""),
 * otherwise return a pointer to the array of words terminated by a NULL
 */
char **strtow(char *str)
{
	char **words, *pos = str;
	int w = 0, c;

	if (!(str && *str))
		return (NULL);
	do {
		while (_isspc(*pos))
			++pos;
		if (!*pos)
			break;
		while (*(++pos) && !_isspc(*pos))
			;
	} while (++w, *pos);
	if (!w)
		return (NULL);
	words = (char **) malloc(sizeof(char *) * (w + 1));
	if (!words)
		return (NULL);
	w = 0, pos = str;
	do {
		while (_isspc(*pos))
			++pos;
		if (!*pos)
			break;
		for (str = pos++; *pos && !_isspc(*pos); ++pos)
			;
		words[w] = (char *) malloc(sizeof(char) * (pos - str + 1));
		if (!words[w])
		{
			while (w >  0)
				free(words[--w]);
			free(words);
			return (NULL);
		}
		for (c = 0; str < pos; ++c, ++str)
			words[w][c] = *str;
		words[w][c] = '\0';
	} while (++w, *pos);
	words[w] = NULL;
	return (words);
}
