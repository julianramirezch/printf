#include "holberton.h"

/**
 * print_char - Print character.
 * @argum: va_list,
 * @buffer: Pointer.
 * @position: Pointer to position buffer.
 * Return: Void.
 */
int print_char(va_list argum, char *buffer, unsigned int *position)
{
	buffer[*position] = va_arg(argum, int);
	*position += 1;
	return (0);
}

/**
 * print_str - Print string.
 * @argum: va_list,
 * @buffer: Pointer.
 * @position: Pointer to position buffer.
 * Return: Void.
 */
int print_str(va_list argum, char *buffer, unsigned int *position)
{
	char *str = va_arg(argum, char*);
	int cont = 0;

	while (str[cont])
	{
		buffer[*position] = str[cont];
		*position += 1;
		cont++;
	}
	return (0);
}

/**
 * print_pct - Print Percent.
 * @argum: va_list,
 * @buffer: Pointer.
 * @position: Pointer to position buffer.
 * Return: Void.
 */

int print_pct(va_list argum, char *buffer, unsigned int *position)
{
	(void) argum;
	buffer[*position] = '%';
	*position += 1;
	return (0);
}
