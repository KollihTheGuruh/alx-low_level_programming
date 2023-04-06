#include "main.h"

/**
 * set_bit - sets the value of a bit to 1 at a given index
 * @n: type unsigned long int input pointer
 * @index: type unsigned int position of unit
 * Return: 1 if works -1 if not
 */

int set_bit(unsigned long int *n, unsigned int index)
{
	if (index >= sizeof(unsigned long int) * 8)
	return (-1);

	*n |= 1UL << index;
	return (1);
}
