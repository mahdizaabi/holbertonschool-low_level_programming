#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>
#include <stdlib.h>
/**
 * printf_c - print a character.
 * @arg_variables: list of arguments.
 * Return: void
 */
void printf_c(va_list arg_variables)
{
	printf("%c", va_arg(arg_variables, int));
}
/**
 * printf_i - print an integer.
 * @arg_variables: arguments
 * Return: void
 */
void printf_i(va_list arg_variables)
{
	printf("%i", va_arg(arg_variables, int));
}
/**
 * printf_f - print a float.
 *
 * @arg_variables: list of arguments.
 */
void printf_f(va_list arg_variables)
{
	printf("%f", va_arg(arg_variables, double));
}
/**
 * printf_s - print a string.
 * @arg_variables: arguments
 * Return: void
 */
void printf_s(va_list arg_variables)
{
	char *p;

	p = va_arg(arg_variables, char *);

	if (p == NULL)
	p = "(nil)";
	printf("%s", p);
}
/**
 * print_all - prints all.
 * @format: last argument.
 * Return: void
 */
void print_all(const char * const format, ...)
{
	int i = 0;
	int j = 0;
	char *sep = "";
	va_list arg_variables;
	/*Array of struct containing the different variable types accepted*/
	variable_type var[] = {
	{"c", printf_c},
	{"i", printf_i},
	{"f", printf_f},
	{"s", printf_s},
	{NULL, NULL} };
	/*Init arg list to retrieve the add arguments after parameter format*/
	va_start(arg_variables, format);
	/*test if both pointer and string different than NULL*/
	j = 0;
	while (format && format[j])
	{
		i = 0;
		while (var[i].character)
		{
			if (*(format + j) == *(var[i].character))
			{
				printf("%s", sep);
					(var[i].printf)(arg_variables);
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
