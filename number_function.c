#include "holberton.h"

/**
 * itoaa - is the function to convert int to string
 * @arguments: is the list of the arguments the printf recive
 * @buffer: where all the input save her
 * @position: is the size of the input
 *
 * Return: the pointer with the size of the printf
 */
int itoaa(va_list arguments, char *buffer, int *position)
{
	int numbers = 0, negative = 0, count = 0;
	int n = va_arg(arguments, int);

	numbers = abs(n);
	if (numbers == 0)
	{
		buffer[*position] = '0';
		*position += 1;
	}
	while (numbers)
	{
		int r = numbers % 10;

		if (r >= 10)
		{
			buffer[*position] = 65 + (r - 10);
			*position += 1;
			count++;
		}
		else
		{
			buffer[*position] = 48 + r;
			*position += 1;
			count++;
		}
		numbers /= 10;
	}
	if (n < 0)
	{
		buffer[*position] = '-';
		*position += 1;
		count++;
		negative = 1;
	}
	reverse(buffer, position, count, negative);

	return (*position);
}
