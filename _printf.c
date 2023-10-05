#include "main.h"
#include <stdarg.h>
/**
 * _printf - print format string
 * @format: the format we print
 * Return: i as int
 */

int _printf(const char *format, ...)
{
	int (*fune)(va_list, fla_t *);
	const char *po;

	va_list fmt;

	fla_t flag = {0, 0, 0};

	register int leng = 0;

	va_start(fmt, format);

	if (!format || (format[0] == '%' && !format[1]))
		return (-1);
	if (format[0] == '%' && format[1] == ' ' && !format[2])
		return (-1);
	for (po = format; *po; po++)
	{
		if (*po == '%')
		{
			po++;
			if (*po == '%')
			{
				leng += _putc('%');
				continue;
			}
			while (flags(*po, &flag))
				po++;
			fune = print_d(*po);

			leng += (fune) ? fune(fmt, &flag) : _printf("%%%c", *po);
		}
		else
			leng += _putc(*po);
	}
	_putc(-1);
	va_end(fmt);

	return (leng);
}
