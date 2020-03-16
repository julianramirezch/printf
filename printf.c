#include "holberton.h"
/**
 * _printf - The printf main function
 * @format: the recieve format.
 * Return: Pointer
 */

int _printf(const char *format, ...)
{
	va_list argum;
	char *buffer = NULL;
	int cfor = 0, l = 0, *len = NULL, p = 0, *pos = NULL;
	int (*get_function)(va_list, char *, int *, int *);/*valida formato*/

	if (format == NULL)
		return (1);
	buffer = malloc(2048);/*asignando puntero buffer principal*/
	if (buffer == NULL)
		return (1);
	len = &l;
	pos = &p;
	va_start(argum, format);
	while (format && format[cfor])
	{
		if (format[cfor] == '%')
		{
			cfor++;
			get_function = select_function(format[cfor]);
			if (get_function == NULL)
				return (1);
			else
				get_function(argum, buffer, pos, len);
		}
		else
		{
			buffer[*pos] = format[cfor];
			*pos += 1;
		}
		cfor++;
	}
	buffer[*pos] = '\0';
	write(1, buffer, *pos);
	va_end(argum);
	free(buffer);
	return (*len);
}
