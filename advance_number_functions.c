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
