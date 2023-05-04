#include "main.h"

/**
 * clear_bit - Clears a bit at a specified index in a given number
 * @n: Pointer to the number in which the bit is to be cleared
 * @index: Index of the bit to be cleared
 *
 * Return: 1 if successful, or -1 if an error occurred
 */

int clear_bit(unsigned long int *n, unsigned int index)
{
if (index >= (sizeof(unsigned long int) * 8))
{
return (-1);
}
else
{
*n &= ~(1UL << index);
return (1);
}
}
