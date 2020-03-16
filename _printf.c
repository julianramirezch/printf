#include "holberton.h"
/**
 * _printf - The printf main function
 * @format: the recieve format.
 * Return: Pointer
 */

int (*select_function(char c))(va_list, char *, unsigned int *);

int _printf(const char *format, ...)
{
	va_list arguments;
	char *buffer = NULL;
        int cfor = 0, positionBuffer = NULL;
	unsigned int *position = NULL;
/*Validacion si para ver si hay un formato*/
	int (*get_function)(va_list, char *, unsigned int *);

	if (format == NULL)
		return (0);
/* Asignando un puntero con un buffer principal */
	buffer = malloc(50);
	if (buffer == NULL)
		return (0);

	position = malloc(sizeof (int));
	if (position == NULL)
		return (0);
        *position = 0;

	va_start(arguments, format);


	va_start(arguments, format);
	while (format[cfor])
	{
		if (format[cfor] == '%')
		{
			cfor++;
			get_function = select_function(format[cfor]);
                        if (get_function == NULL)
                                return (-1);
                        else
				get_function(arguments, buffer, position);
		}
		else
		{
			buffer[*position] = format[cfor];
			*position += 1;
		}
		cfor++;
	}
	buffer[*position] = '\0';

	write(1, buffer, *position);
	positionBuffer = *position;

	free(buffer);
	free(position);
	va_end(arguments);

	return (positionBuffer);
}

int (*select_function(char c))(va_list, char *, unsigned int *)
{
	int i = 0;

	cases print_format[] = {
		{'c', print_char},
		{'s', print_str},
		{'i', itoaa},
		{'d', itoaa},
		{'%', print_pct},
		{0, NULL}};

	while (print_format[i].arg)
	{
		if (print_format[i].arg == c)
		{
			return(print_format[i].f);
		}
		i++;
	}

	return (0);
}
