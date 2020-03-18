#include "holberton.h"
/**
 * unsignedint - is the function to convert int to unsigned intiger string
 * @argum: is the list of the arguments the printf recive
 * @buffer: where all the input save her
 * @pos: is the size of the input
 *
 * Return: the pointer with the size of the printf
 */
int unsignedint(va_list argum, char *buffer, int *pos)
{
	long int rem = 0, count = 0, negative = 4294967296;
	long int num = va_arg(argum,  int);

	if (num == 00)
	{
		buffer[*pos] = '0';
		*pos += 1;
		return (0);
	}
	if (num < 0)
	{
		num += negative;
	}
	while (num != 0)
	{
		rem = num % 10;
		buffer[*pos] = (rem > 9)
			? (rem - 10) + 'A'
			: rem + '0';
		*pos += 1;
		num /= 10;
		count++;
	}

	reverse(buffer, pos, count);
	return (*pos);
}
/**
 * print_S - allocate in the buffer the result of the function
 * @argum: is the list of the arguments the printf recive
 * @buffer: where all the input save her
 * @pos: is the size of the input
 *
 * Return: the pointer with the last positio
 */
int print_S(va_list argum, char *buffer, int *pos)
{
	int i = 0;
	char *p = va_arg(arguments, char *);

	if (p == NULL)
		str = "(null)";

	while (p[i])
	{
/*range of the string*/
		if (p[i] >= 127 || p[i] < 32)
		{
			hex(p[i], buffer, pos);
			i++;
		}
		else
		{
			buffer[*pos] = ptr[i];
			*pos += 1;
			i++;
		}
	}
	return (*pos);
}

/**
 * hex - is the function to convert int to hexadecimal string
 * @c: is the char
 * @buffer: where all the input save her
 * @pos: is the size of the input
 *
 * Return: the pointer with the size of the printf
 */
void hex(char c, char *buffer, int *pos)
{
	int rem = 0, count = 0;

	if (num == 00)
	{
		buffer[*pos] = '0';
		*pos += 1;
		return (0);
	}

	while (num != 0)
	{
		rem = num % 16;
		buffer[*pos] = (rem > 9)
			? (rem - 10) + 'A'
			: rem + '0';
		*pos += 1;
		num /= 16;
		count++;
	}

	reverse(buffer, pos, count);
	return (*pos);
}
