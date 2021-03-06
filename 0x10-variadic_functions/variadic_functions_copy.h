#ifndef VARIADICF_H
#define VARIADICF_H

#include <stdarg.h>
typedef struct
{
	char *op;
	void (*f)(va_list ap);
} op_t;

void print_char(va_list ap);
void print_int(va_list ap);
void print_float(va_list ap);
void print_string(va_list ap);

int sum_them_all(const unsigned int n, ...);
void print_numbers(const char *separator, const unsigned int n, ...);
void print_strings(const char *separator, const unsigned int n, ...);
void print_all(const char * const format, ...);

#endif
