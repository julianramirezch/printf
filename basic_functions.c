#include "holberton.h"

/**
 * _abs - the function return always a positive numbers
 * @n: the character to print
 *
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 */

int _abs(int n)
{
	if (n > 0)
	{
		return (n);
	}
	else if (n == 0)
	{
		return (n);
	}
	else if (n < 0)
	{
		return (n = n * -1);
	}
	return (n);
}
/**
 * reverse - reverse the string to
 * @buffer: is the main space which will be save all the files
 * @position: is the localitation of the last digit
 * @count: number count's
 *
 */


void reverse(char *buffer, unsigned int *position, int count)
{
	unsigned int inicio = *position - count;
	unsigned int final = (*position - 1);
	char c;

	while (final >= inicio)
	{
		c = buffer[inicio];
		buffer[inicio] = buffer[final];
		buffer[final]  = c;
		inicio++;
		final--;
		position += 1;
	}
}
