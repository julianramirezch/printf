#include "holberton.h"
/**
 * clean_buffer- main for writing and resetting the buffer
 * @buffer: where the all input are save
 * @pos: is a pointer with the size of the all buffer
 *
 */
void clean_buffer(char *buffer, int *pos)
{
	int i = 0;

	for (i = 0; i < 2024; i++)
	{
		buffer[i] = 0;
	}
	*pos = 0;
	free(buffer);
}
