#include "main.h"
#include <string.h>

/**
 * -strncat - concatenates two strings
 *
 *  @desr: 1st param
 *  @src: 2nd param
 *  @n: 3rd param
 *  Return: string
 */

char *_strncat(char *dest, char *src, int n)
{
	strncat(dest, src, n);
		return (dest);
}
