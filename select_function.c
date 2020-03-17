#include "holberton.h"
/**
 * select_function - Select Function.
 * @c: char
 * Return: print_format[i].f
 */

int (*select_function(char c))(va_list, char *, int *)
{
	int i = 0;

	cases print_format[] = {
		{'c', print_char},
		{'s', print_str},
		{'i', itoaa},
		{'d', itoaa},
		{'%', print_pct},
		{0, NULL}
	};

	while (print_format[i].arg)
	{
		if (print_format[i].arg == c)
		{
			return (print_format[i].f);
		}
		i++;
	}
	return (0);
}
