#include "main.h"
#include <stdlib.h>
#include <string.h>
/**
 * *str_concat -  pointer should point to a newly allocated space
 * in memory which contains the contents of s1, followed by the
 * contents of s2, and null terminated
 * @s1: str one
 * @s2: str two
 * Return: a pointer or NULL
 */

char *str_concat(char *s1, char *s2)
{
	char *concat_str;
	int index, s1_len, s2_len, concat_index;

	if (s1 == NULL || s2 == NULL)
		return (NULL);

	s1_len = strlen(s1);
	s2_len = strlen(s2);
	concat_str = strcat(s1, s2);

	concat_str = malloc(sizeof(char) * (s1_len + s2_len + 1));

	if (concat_str == NULL)
		return (NULL);

	for (index = 0; s1[index]; index++)
		concat_str[concat_index++] = s1[index];

	for (index = 0; s2[index]; index++)
		concat_str[concat_index++] = s2[index];

	concat_str[s1_len + s2_len] = '\0';

	return (concat_str);
}
