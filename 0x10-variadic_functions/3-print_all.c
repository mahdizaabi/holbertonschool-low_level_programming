#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>
#include <stdlib.h>
/**
 * print_char - print a character.
 * @arg: argument
 * Return: void
 */
void print_char(va_list arg_variables)
{
	printf("%c", va_arg(arg_variables, int));
}
/**
 * print_integer - print an integer.
 * @arg: argument
 * Return: void
 */
void print_integer(va_list arg_variables)
{
	printf("%i", va_arg(arg_variables, int));
}
/**
 * print_float - print a float.
 *
 * @arg: list of argements.
 */
void print_float(va_list arg_variables)
{
	printf("%f", va_arg(arg_variables, double));
}
/**
 * print_string - print a string.
 * @arg: argement
 * Return: void
 */
void print_string(va_list arg_variables)
{
	char *p;

	p = va_arg(arg_variables, char *);

	if (p == NULL)
	p = "(nil)";
	printf("%s", p);
}
/**
 * print_all - prints all.
 * @format: list of the format
 * Return: void
 */
void print_all(const char * const format, ...)
{
	int i;
	int j;
	char *sep = "";
	va_list arg_variables;
	variable_type type[] = {
	{"c", print_char},
	{"i", print_integer},
	{"f", print_float},
	{"s", print_string},
	{NULL, NULL} };
	va_start(arg_variables, format);
	j = 0;
	while (format && format[j])
	{
	i = 0;
		while (type[i].character)
		{
			if (format[j] == *(type[i].character))
			{
				printf("%s", sep);
					(type[i].print_func)(arg_variables);
						sep = ", ";
							break;
			}
		i++;
		}
		j++;
	}
	printf("\n");
	va_end(arg_variables);
}
