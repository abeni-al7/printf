#ifndef MAIN_H
#define MAIN_H

#include <unistd.h>
#include <stdio.h>
#include <stdarg.h>

/**
 * struct sp - struct of specifiers and functions
 * @sp: specifiers
 * @f: function pointers
 * Description: this is a struct
 */

typedef struct sp
{
	char sp;
	int (*f)(va_list);
} sp;

int _putchar(char c);
int _printf(const char *format, ...);
int print(const char *format, va_list args);
int print_char(va_list args);
int print_str(va_list args);
int print_int(va_list args);
int print_binary(va_list args);
int print_unsigned(va_list args);
int print_octal(va_list args);
int print_hexa(va_list args);
int print_lower_hexa(va_list args);
int print_ascii(va_list args);
int print_hexadec(unsigned int n);

#endif
