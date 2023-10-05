#include "main.h"
#include <stdio.h>
/**
 * print_b - print binary
 * @l: argments list
 * @fl: flags pointer
 * Return: leng
 */
int print_b(va_list l, fla_t *fl)
{
	unsigned int num = va_arg(l, unsigned int);
	char *bin = conv_s(num, 2, 0);

	(void)fl;
	return (_puts(bin));
}

/**
 * print_o - print number on octal
 * @l: argmints list
 * @fl: pointer to flags
 * Return: count of printed
 */

int print_o(va_list l, fla_t *fl)
{
	unsigned int num = va_arg(l, unsigned int);
	char *oct = conv_s(num, 8, 0);
	int leng = 0;

	if (fl->hash == 1 && oct[0] != '0')
		leng += _putc('0');
	leng += _puts(oct);

	return (leng);
}

/**
 * print_add - prints address.
 * @l: arguments
 * @fl: pointer to flags
 * Return: leng
 */
int print_add(va_list l, fla_t *fl)
{
	char *s;
	unsigned long int p;
	int leng = 0;

	p = va_arg(l, unsigned long int);

	(void)fl;

	if (!p)
		return (_puts("(nill)"));

	s = conv_s(p, 16, 1);
	leng += _puts("0x");
	leng += _puts(s);

	return (leng);
}

/**
 * conv_s - convert number into string
 * @n: the number
 * @b: base
 * @l_cst: flag of hex
 * Return: pointer
 */

char *conv_s(unsigned long int n, int b, int l_cst)
{
	static char *read;
	static char buf[50];
	char *po;

	read = (l_cst)
	       ? "0123456789abcdef"
	       : "0123456789ABCDEF";

	po = &buf[49];
	*po = '\0';

	do {
		*--po = read[n % b];
		n /= b;
	} while (n != 0);

	return (po);
}
