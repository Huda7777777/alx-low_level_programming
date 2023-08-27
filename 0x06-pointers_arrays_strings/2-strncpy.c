#include "main.h"
#include <string.h>

/**
 * _strncpy - function that copies a string
 *
 * @dest: param1
 * @n: param2
 * @src: param3
 * Return: string
 */
char *_strncp(char *dest, char *src, int n)
{
	strncp(dest, src, n);
	return (dest);
}
