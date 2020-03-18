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
/**
 * rev - Print reverse string.
 * @argum: va_list
 * @buffer: Buffer
 * @pos: Poisition in buffer
 * Return: 0
 */
int rev(va_list argum, char *buffer, int *pos)
{
	char *s = va_arg(argum, char *);
	int cont, aux;

	for (cont = 0 ; *(s + cont) != '\0' ; cont++)
	{}
	for (aux = cont - 1 ; aux >= 0 ; aux--)
	{
		buffer[*pos] = (*(s + aux));
		*pos += 1;
	}
	return (0);
}
/**
 * rot13 - Print string in ROT13
 * @argum: va-list
 * @buffer: Buffer
 * @pos: Pointer position
 * Return: 0
 */
int rot13(va_list argum, char *buffer, int *pos)
{
	char *s = va_arg(argum, char *);
	int j, u;
	char a[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
	char b[] = "NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm";

	for (j = 0 ; *(s + j) ; j++)
	{
		for (u = 0; *(a + u); u++)
		{
			if (*(s + j) == *(a + u))
			{
				buffer[*pos] = *(b + u);
				*pos += 1;
				break;
			}
		}
	}
	return (0);
