#include "holberton.h"

/**
 * print_char - Print character.
 * @argum: va_list,
 * @buffer: Pointer.
 * @pos: Pointer to position buffer.
 * Return: Void.
 */

int print_char(va_list argum, char *buffer, int *pos)
{
	buffer[*pos] = va_arg(argum, int);
	*pos += 1;
	return (0);
}

/**
 * print_str - Print string.
 * @argum: va_list,
 * @buffer: Pointer.
 * @pos: Pointer to position buffer.
 * Return: 0.
 */

int print_str(va_list argum, char *buffer, int *pos)
{
	char *str = va_arg(argum, char*);
	int cont = 0;

	if (str == NULL)
		str = "(null)";
	while (str[cont])
	{
		buffer[*pos] = str[cont];
		*pos += 1;
		cont++;
	}
	return (0);
}

/**
 * print_pct - Print Percent.
 * @argum: va_list,
 * @buffer: Pointer.
 * @pos: Pointer to position buffer.
 * Return: Void.
 */

int print_pct(va_list argum __attribute__((unused)), char *buffer, int *pos)
{
	buffer[*pos] = '%';
	*pos += 1;
	return (0);
}
