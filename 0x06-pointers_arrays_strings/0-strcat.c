#include "main.h"

/**
 * _strcat - appends the src string to the dest string,
 * overwriting the terminating null byte (\0) at the end of dest,
 * and then adds a terminating null byte
 * @dest: char type string
 * @src: char type string
 * Description: Copy the string pointed to by pointer `src` to
 * the buffer pointed to by `dest`
 * Return: Pointer to `dest`
 */

char *_strcat(char *dest, char *src)
{
	char i, count = 0;
	char *ptr;

	for (i = 0; dest[i] != '\0'; i++)
		count++;

	for (i = 0; src[i] != '\0'; i++)
	{
		dest[count] = src[i];
		count++;
	}

	dest[count] = '\0';

	return (dest);
}
