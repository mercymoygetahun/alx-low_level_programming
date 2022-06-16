#include "main.h"
#include <stdio.h>

/**
 * char *_strncat(char *dest, char *src, int n);
 * @dest: is a pointer type char
 * @src: is a pointer type char
 * @n: is a int variable
 * @n: is a int variable
 */

char *_strncat(char *dest, char *src, int n)
{
	int i, j;

	for (i = 0; *dest != 0; i++)
		

	for (j = 0; src[j] != '\ 0'; j++, n--, i++)
	{
		dest[i] = src[j];
		
	}
	return (dest);
}

