#include "main.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * string_nconcat - concatenates two strings
 * @s1: first string
 * @s2: second string
 * @n: the amount of byte
 * if malloc fails, status value = NULL
 * Return: if NULL "" else Pointer
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	int i, j, main_n;
	int len_s1, len_s2;
	char *p;

	i = 0;
	j = 0;

	while (s1++)
		i++;

	while (s2++)
		j++;

	len_s1 = i;
	len_s2 = j;

	p = malloc(len_s1 + n);

	if (p == NULL)
		return (NULL);

	for (i = 0; i < len_s1; i++)
		p[i] = s1[i];

	if (n >= len_s2)
	{
		main_n = len_s2;
	}
	else
	{
		main_n = n;
	}

	for (j = 0; j + i + 1 <= len_s1 + main_n; j++)
		p[j + i + 1] = s2[j];

	if (p == NULL)
		return ("");
	return (p);

}
