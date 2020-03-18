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
		{'r',rev},
		{'i', itoaa},
		{'d', itoaa},
		{'%', print_pct},
		{'b', binary},
		{'o', octal},
		{'x', hexaupper},
		{'X', hexadown},
		{'u', unsignedint},
		{'S', print_S},
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

/**
 * unk - Print Unknown format
 * @c: Character.
 * @buffer: Buffer
 * @pos: Position in buffer.
 * Return: Always 0
 */

int unk(char c, char *buffer, int *pos)
{
	buffer[*pos] = '%';
	*pos += 1;
	buffer[*pos] = c;
	*pos += 1;
	return (0);
}
