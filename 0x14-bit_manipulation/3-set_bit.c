#include "main.h"

/**
 * set_bit - Sets the bit at the given index in a unsigned long integer.
 * @n: Pointer to the unsigned long integer.
 * @index: Index of the bit to set.
 *
 * Return: 1 if the bit was successfully set, or -1 if an error occurred.
 */

int set_bit(unsigned long int *n, unsigned int index)
{
if (index >= (sizeof(unsigned long int) * 8))
{
return (-1);
}
else
{
*n |= (1 << index);
return (1);
}
}
