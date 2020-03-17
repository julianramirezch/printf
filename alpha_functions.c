#include "holberton.h"

/**
 * print_char - Print character.
 * @argum: va_list,
 * @buffer: Pointer.
 * @pos: Pointer to position buffer.
 * @len: Lenght.
 * Return: Void.
 */
int print_char(va_list argum, char *buffer, int *pos, int *len)
{
	buffer[*pos] = va_arg(argum, int);
	*len += 1;
	*pos += 1;
	return (0);
}

/**
 * print_str - Print string.
 * @argum: va_list,
 * @buffer: Pointer.
 * @pos: Pointer to position buffer.
 * @len: Lenght;
 * Return: 0.
 */
int print_str(va_list argum, char *buffer, int *pos, int *len)
{
	char *str = va_arg(argum, char*);
	int cont = 0;

	if (str == NULL)
		str = "(null)";
	while (str[cont])
	{
		buffer[*pos] = str[cont];
		*len += 1;
		*pos += 1;
		cont++;
	}
	return (0);
}

/**
 * pc - Print Percent.
 * @argum: va_list,
 * @buffer: Pointer.
 * @pos: Pointer to position buffer.
 * @len: lengh
 * Return: Void.
 */

int pc(va_list argum __attribute__((unused)), char *buffer, int *pos, int *len)
{
	buffer[*pos] = '%';
	*len += 1;
	*pos += 1;
	return (0);
}
