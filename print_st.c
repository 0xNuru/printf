#include "main.h"

/**
 * print_rev - to print revers string
 * @arg: function argments
 * @fl: flag pointer
 * Return: count of printed
 */

int print_rev(va_list arg, fla_t *fl)
{
	int leng = 0, i;
	char *str = va_arg(arg, char *);

	(void)fl;

	if (!str)
		str = "(null)";
	while (str[leng])
		leng++;

	for (i = leng - 1; i >= 0; i--)
		_putc(str[i]);

	return (leng);
}

/**
 * print_r13 - print char in rot13
 * @l: argments list
 * @fl: flag pointer
 * Return: string with r13
 */
int print_r13(va_list l, fla_t *fl)
{
	int i, j;
	char str[] = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ";
	char dest[] = "nopqrstuvwxyzabcdefghijklmNOPQRSTUVWXYZABCDEFGHIJKLM";
	char *st;

	(void)fl;

	st = va_arg(l, char *);


	for (i = 0; st[i]; i++)
	{
		if (st[i] < 'A' || (st[i] > 'Z' && st[i] < 'a') || st[i] > 'z')
			_putc(st[i]);
		else
			for (j = 0; j < 53; j++)
			{
				if (st[i] == str[j])
					_putc(dest[j]);
			}
	}

	return (i);
}

/**
 * print_S - print string
 * @l: argment list
 * @fl: pointer to flags
 * Return: leng
 */

int print_S(va_list l, fla_t *fl)
{
	int i, leng = 0;
	char *ptr;
	char *str = va_arg(l, char *);

	(void)fl;

	if (!str)
		return (_puts("(nill)"));

	for (i = 0; str[i]; i++)
	{
		if (str[i] > 0 && (str[i] < 32 || str[i] >= 127))
		{
			_puts("\\x");
			leng += 2;
			ptr = conv_s(str[i], 16, 0);
			if (!ptr[i])
				leng += _putc('0');
			leng += _puts(ptr);
		}
		else
			leng += _putc(str[i]);
	}
	return (leng);
}
