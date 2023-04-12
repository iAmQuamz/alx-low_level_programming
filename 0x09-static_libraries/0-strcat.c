#include "main.h"

/**
 * _strcat - concatenate the two strings
 * @dest: String that will be appended
 * @src: String to be upon
 *
 * Return: pointer to result string @dest
 */

char *_strcat(char *dest, char *src)
{
	int i, c;

	for (i = 0; dest[i] != '\0'; i++)
		;

	for (c = 0; src[c] != '\0'; c++)
	{
		dest[i] = src[c];
		i++;
	}

	dest[i] = '\0';
	return (dest);
}

