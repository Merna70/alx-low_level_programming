#include "variadic_functions.h"

/**
 *print_all - function that prints anything
 *@format: the format string
 *
*/

void print_all(const char * const format, ...)
{
	int i = 0, y;
	char *separator = "";
	va_list ap;
	token_t tokens[] = {
		{"c", format_char},
		{"i", format_int},
		{"f", format_float},
		{"s", format_string},
		{NULL, NULL}
	};

	va_start(ap, format);
	while (format && format[i])
	{
		y = 0;
		while (tokens[y].token)
		{
			if (format[i] == tokens[y].token[0])
			{
				tokens[y].f(separator, ap);
				separator = ", ";
			}
			y++;
		}
		i++;
	}
	printf("\n");
	va_end(ap);
}
