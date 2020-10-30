#ifndef _HOLBERTON_
#define _HOLBERTON_
#include <stdarg.h>

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
