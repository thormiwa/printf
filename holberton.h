#ifndef _HOLBERTON_
#define _HOLBERTON_

#include <stdarg.h>

/**
 * struct printer - A new struct type defining a printer.
 * @symbol: A symbol representing a data type.
 * @print: A function pointer to a function that prints
 *         a data type corresponding to symbol.
 */
typedef struct printer
{
	char *symbol;
	void (*print)(va_list arg);
}

int _printf(const char *format, ...);
int pull_print(char c, va_list *ap);

int _putchar(char);
int buffer(char a, char *s);
int p_bin(unsigned int num);
int exponent(int x, int y);
int p_int(int);
int p_string(char *);
int p_hexstring(char *);
int p_rev(char *s);
int p_hexcap(unsigned int num);
int p_octal(unsigned int num);
int p_uint(unsigned int num);
int p_hex(unsigned int num);

int mkstring(va_list *);
int mkchar(va_list *);
int mkint(va_list *);
int mkbin(va_list *);
int mkhex(va_list *);
int mkhexcap(va_list *);
int mkoctal(va_list *);
int mkhexstring(va_list *);
int mkunsigned(va_list *);

#endif
