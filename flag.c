#include "main.h"

/**
 * flags - to pass flags
 * @c: the flags sins
 * @fl: the struct flags
 * Return: i as indcator for the flage
 */

int flags(char c, fla_t *fl)
{
	int i = 0;

	switch (c)
	{
		case '+':
			fl->plus = 1;
			i = 1;
			break;
		case ' ':
			fl->space = 1;
			i = 1;
			break;
		case '#':
			fl->hash = 1;
			i = 1;
			break;
	}

	return (i);
}
