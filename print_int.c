#include "main.h"

/**
 * p_int - print an integer
 * @arg: arguments list
 * @fl: pointer to flags
 * Return: arguments number
 */
int p_int(va_list arg, fla_t *fl)
{
	int n;
	int leng;

	n  = va_arg(arg, int);
	leng = count_num(n);

	if (fl->space == 1 && fl->plus == 0 && n >= 0)
	{
		leng += _putc(' ');
	}
	if (fl->plus == 1 && n >= 0)
		leng += _putc('+');
	if (n <= 0)
		leng++;
	print_int(n);

	return (leng);
}


/**
* p_unsint - print unsigned int
* @l: argment list
* @fl: pinter to flags
* Description: a function that prints
* Return: length of number printed
*/
int p_unsint(va_list l, fla_t *fl)
{

	unsigned int num;
	char *str;

	num = va_arg(l, unsigned int);
	str = conv_s(num, 10, 0);

	(void)fl;

	return (_puts(str));
}

/**
 * print_int - to print int
 * @num: number to print
 */

void print_int(int num)
{
	unsigned int num1;

	if (num < 0)
	{
		_putc('-');
		num1 = -num;
	}

	else
		num1 = num;

	if (num1 / 10)
		print_int(num1 / 10);
	_putc((num1 % 10) + '0');
}

/**
 * count_num - the number of num
 * @n: the number to count
 * Return: number of number
 */

int count_num(int n)
{
	unsigned int leng = 0;
	unsigned int s;

	if (n < 0)
		s = -n;
	else
		s = n;

	while (s != 0)
	{
		s /= 10;
		leng++;
	}
	return (leng);
}
