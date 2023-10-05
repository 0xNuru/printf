#include "main.h"

/**
 * _strleng - get the length of string
 * @s: the string
 * Return: leng
 */
int _strleng(char *s)
{
	int leng = 0;

	while (s[leng] != '\0')
		leng++;

	return (leng);
}
