#ifndef MAIN_H
#define MAIN_H



#include <stdlib.h>
#include <stdarg.h>
#include <stdio.h>
#include <unistd.h>
#include <limits.h>

/**
 * struct fla - the flags
 * @plus: flag "+"
 * @space: flag " "
 * @hash: flag hash
 */
typedef struct fla
{
	int plus;
	int space;
	int hash;
} fla_t;

/**
* struct don - defines a structure for symbols
* @sy: The operator
* @f: The function associated
*/

typedef struct don
{
	char sy;
	int (*f)(va_list l, fla_t *fl);
} don;
/*don_t - typedef */
typedef struct don don_t;



/* _strleng.c */
int _strleng(char *s);
/* _printf.c */
int _printf(const char *format, ...);
/* _putc.c */
int _putc(char c);
int _puts(char *s);
/* p_specific.c  */
int print_c(va_list l, fla_t *fl);
int print_s(va_list l, fla_t *fl);
int print_prcnt(va_list l, fla_t *fl);
/*print_int.c */
int p_int(va_list arg, fla_t *fl);
int p_unsint(va_list l, fla_t *fl);
void print_int(int num);
int count_num(int n);
/*converter.c*/
int print_b(va_list l, fla_t *fl);
int print_o(va_list l, fla_t *fl);
int print_add(va_list l, fla_t *fl);
char *conv_s(unsigned long int n, int b, int l_cst);
/* print _st.c */
int print_rev(va_list arg, fla_t *fl);
int print_r13(va_list l, fla_t *fl);
int print_S(va_list l, fla_t *fl);

/* print_hex */
int print_x(va_list l, fla_t *fl);
int print_X(va_list l, fla_t *fl);

/* printl.c*/
int (*print_d(char c))(va_list, fla_t *);
/* flag.c*/
int flags(char c, fla_t *fl);




#endif
