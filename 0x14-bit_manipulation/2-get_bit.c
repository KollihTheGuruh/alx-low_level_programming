#include "main.h"

/**
 * get_bit - Retrieves the value of a specific bit in a number
 * @n: The number from which to retrieve the bit
 * @index: The index of the bit to retrieve (starting from 0)
 *
 * Return: The value of the bit at the given index, or -1 on error
 */

int get_bit(unsigned long int n, unsigned int index)
{
int bit_val = -1;

if (index <= 63)
{
unsigned long int mask = 1;
mask = mask << index;
bit_val = (n & mask) != 0;
}

return (bit_val);

}
