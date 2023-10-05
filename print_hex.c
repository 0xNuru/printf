#include "main.h"

/**
 * print_x - to print HEX
 * @l: argment list
 * @fl: flag pointer
 * Return: leng
 */

int print_x(va_list l, fla_t *fl)
{
	int leng = 0;
	unsigned int num = va_arg(l, unsigned int);
	char *hex = conv_s(num, 16, 1);

	if (fl->hash == 1 && hex[0] != '0')
		leng += _puts("0x");

	leng += _puts(hex);

	return (leng);
}

/**
 * print_X - to print hex
 * @l: argment list
 * @fl: pointer to flags
 * Return: leng
 */

int print_X(va_list l, fla_t *fl)
{
	int leng = 0;
	unsigned int num = va_arg(l, unsigned int);
	char *hex = conv_s(num, 16, 0);

	if (fl->hash == 1 && hex[0])
		leng += _puts("0X");
	leng += _puts(hex);

	return (leng);
}

