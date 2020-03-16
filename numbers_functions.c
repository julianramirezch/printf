#include "holberton.h"

/**
  * itoaa - Integer to Char.
  * @argum: va_list
  * @buffer: buffer.
  * @len: Lenght
  * @pos: Position.
  * Return: Pointer.
  */
int itoaa(va_list argum, char *buffer, int *pos, int *len __attribute__((unused)))
{
	int numbers = 0, negative = 0, count = 0;
	int n = va_arg(argum, int);

	numbers = abs(n);

	if (numbers == 0)
	{
		buffer[*pos] = '0';
		*pos += 1;
	}
	while (numbers)
	{
		int r = numbers % 10;

		if (r >= 10)
		{
			buffer[*pos] = 65 + (r - 10);
			*pos += 1;
			count++;
		}
		else
		{
			buffer[*pos] = 48 + r;
			*pos += 1;
			count++;
		}
		numbers /= 10;
	}

	if (n < 0)
	{
		buffer[*pos] = '-';
		*pos += 1;
		count++;
		negative = 1;
	}
	reverse(buffer, pos, count, negative);
	return (*pos);
}
