#include "main.h"
#include "math.h"

/**
 * binary_to_uint - Converts a binary string to an unsigned integer.
 * @b: Pointer to the binary string.
 *
 * Return: Converted unsigned integer, or 0 if @b is NULL or contains
 *         characters other than '0' and '1'.
 */

unsigned int binary_to_uint(const char *b)
{
	unsigned int n = 0;
	unsigned int dec = 0;

	if (b == NULL)
		return (0);
	while (*(b + n) != '\0')
	{
		if (*(b + n) != '0' && *(b + n) != '1')
			return (0);
		dec <<= 1;
		if (*(b + n) == '1')
			dec ^= 1;
		n++;
	}
	return (dec);
}
