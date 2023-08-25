#include "main.h"
#include <string.h>

/**
 * _strcat - concatenates two strings
 *
 * @dest: first param
 * @src: second param
 *
 * Return: string
 */

char *_strcat(char *dest, char *src)

{
	int len = 1, i;

	while (dest[len])
		len++;

	for (i = 0; scr[i] != '\0'; i++)
	{
		dest[len] = src[i];
		len += 1;
	}
	dest[len] = '\0';
	return (dest);
}
