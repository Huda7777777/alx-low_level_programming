#include "main.h"
#include <stdio.h>

/**
 * rot13 - encides a string using rot 13
 *
 * @s: input string
 * Return: the pointer of the dest
 */

char *rot13(char *s)
{
	int a = 0, i;

	char letters[] = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ";
	char rot13[] = "nopqrstuvwxyzabcdefghijklmNOPQRSTUVWXYZABCDEFGHIJKLM";

	while (*(s + a) != '\0')
	{
		for (i = 0; i < 52; i++)
		{
			if (*(s + a) == letter[i])
			{
				*(s + a) = rot13[i];
				break;
			}
		}
		a++;
	}
	return (s);
}
