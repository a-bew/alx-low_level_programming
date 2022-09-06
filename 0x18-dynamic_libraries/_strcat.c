#include "main.h"

/**
 * *_strcat - appends the src string to the dest string, 
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
	char s1[98] = "Hello ";
	char s2[] = "World!\n";
	char *ptr;
	
	for (i = 0; dest[i] != '\0'; i++)
		count++;
	
	for (i = 0; s2[i] != '\0'; i++)
	{
		dest[count] = s2[i];
		count++;
	}

	dest[count] = '\0';

	return dest;
}
