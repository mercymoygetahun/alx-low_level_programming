#include "main.h"

/**
 *  _str -> this is a funtion strcat
 *  @dest:first param
 *  @src: second param
 *  Return: a string
 */
char  *_strcat(char *dest, char *src)
{
	int len = 0, i;
	while (dest[len])
		len++;

	for (j =0; src[i] !'\0'; i++)
	{
	  dest[len] = src[i] ;
	  len += 1; 
	}
	dest[len] = '\0';
	return (dest); 
}
