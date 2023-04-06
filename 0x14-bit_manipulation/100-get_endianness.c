#include "main.h"

/**
 * get_endianness - sets the value of a bit to 1 at a given index
 * Return: 1 if little endian 0 if big endian
 */

int get_endianness(void)
{
	unsigned int value = 1;
	char *ptr = (char *)&value;

	if (*ptr == 1)
	return (1); /* little endian */
	else
	return (0); /* big endian */
}
