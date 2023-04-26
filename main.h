#ifndef MAIN_H
#define MAIN_H

#include <stdio.h>
#include <stdarg.h>
#include <stdlib.h>
#include <unistd.h>
#include <string.h>
#include "main.h"
/**
 * struct _case - datatype used to print according to the char
 * @c: the character
 * @print: the function that print
 *
 */
struct _case
{
	char c;
	int (*print)(va_list args);
};
int _putchar(char c);
int print_chr(va_list args);
int print_str(va_list args);
int print_int(va_list args);
int print_bin(va_list args);
int print_u(va_list args);
int print_hex(va_list args);
int print_oct(va_list args);
int print_HEX(va_list args);
char *convert(unsigned int num, int base);
int get_specifier(char chr, va_list args);
int get(char chr);
int _printf(const char * const format, ...);

#endif
