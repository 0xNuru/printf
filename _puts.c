
#include "main.h"

/**
 * _putc - print character c
 * @c: The character to print
 *
 * Return: On success 1
 */
int _putc(char c)
{
	static char buffer[1024];
	static int i;

	if (c == -1 || i >= 1024)
	{
		write(1, &buffer, i);
		i = 0;
	}
	if (c != -1)
	{
		buffer[i] = c;
		i++;
	}
	return (1);
}
/**
 * _puts - print string
 * @s: the string to print
 * Return: i
 */
int _puts(char *s)
{
	register int i;

	for (i = 0; s[i] != '\0'; i++)
		_putc(s[i]);
	return (i);
}
