#ifndef _VARIADIC_FUNCTION_H_
#define _VARIADIC_FUNCTION_H_
#include <stdarg.h>

struct type
{
char *character;
void (*printf)(va_list);
};
typedef struct type variable_type;

int _putchar(char c);
int sum_them_all(const unsigned int n, ...);
void print_numbers(const char *separator, const unsigned int n, ...);
void print_strings(const char *separator, const unsigned int n, ...);
void print_all(const char * const format, ...);

#endif
