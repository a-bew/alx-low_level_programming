#include "main.h"

/**
 * *_strncpy - find the length of a string
 * @dest: pointer to the string
 * @src: pointer
 * @n: int
 * Return: destination
*/

char *_strncpy(char *dest, char *src, int n)
{
	char i;

	for (i = 0; dest[i] != '\0'; i++)
	{
		if (i < n && src[i] != '\n')
		{
			dest[i] = src[i];
		}
	}

	return (dest);
}
