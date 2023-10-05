#include "main.h"
/**
 * print_c - Prints char
 * @l: list of arg
 * @fl: pointer to flag
 * Return: count char printed.
 */
int print_c(va_list l, fla_t *fl)
{
	(void)fl;
	_putc(va_arg(l, int));
	return (1);
}

/**
 * print_s - Print a string
 * @l: list of arg
 * @fl: flags pointer
 * Return: count char printed.
 */
int print_s(va_list l, fla_t *fl)
{

	char *str;

	str = va_arg(l, char *);

	(void)fl;

	if (!str)
		str = "(null)";
	return (_puts(str));
}

/**
 * print_prcnt - Print a percent symbol
 * @l: list of arg
 * @fl: flag pointer
 * Return: count char printed.
 */

int print_prcnt(va_list l, fla_t *fl)
{
	(void)l;
	(void)fl;
	return (_putc('%'));
}
