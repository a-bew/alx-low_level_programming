#include "main.h"
#include <stdlib.h>
#include <stdio.h>
#include <string.h>

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

	len_s1 = strlen(s1);
	len_s2 = strlen(s2);

	if (n >= len_s2)
	{
		main_n = len_s2;
	}
	else
	{
		main_n = n;
	}

	p = (char *) malloc(len_s1 + main_n + 1);

	if (p == NULL)
                return (NULL);

        for (i = 0; i < len_s1; i++)
                p[i] = s1[i];

	for (j = 0; j < main_n; j++)
		p[j + i] = s2[j];

	p[len_s1 + main_n + 1] = '\0';
	
	return (p);

}
