#include "main.h"

/**
 * string_concatenate - Concatenates two strings.
 *
 * @dest: Destination string.
 * @src: Source string.
 *
 * Return: Pointer to the concatenated string.
 */
char *string_concatenate(char *dest, char *src)
{
	int i = 0, j = 0;

	while (dest[i] != '\0')
	i++;

	for (j = 0; src[j] != '\0'; j++, ++i)
		dest[i] = src[j];

	dest[i] = '\0';

	return (dest);
}
