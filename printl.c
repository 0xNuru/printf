#include "main.h"

/**
 * *print_d - to check spacefier
 * @c: the spacefier
 * Return: the function print
 */

int (*print_d(char c))(va_list, fla_t *)
{
	don aray[] = {
		{'s', print_s},
		{'c', print_c},
		{'%', print_prcnt},
		{'d', p_int},
		{'i', p_int},
		{'u', p_unsint},
		{'x', print_x},
		{'X', print_X},
		{'b', print_b},
		{'o', print_o},
		{'r', print_rev},
		{'R', print_r13},
		{'S', print_S},
		{'p', print_add},
	};

	int spec = 14;

	register int i;

	for (i = 0; i < spec; i++)
	{
		if (aray[i].sy == c)
			return (aray[i].f);
	}
	return (NULL);
}
