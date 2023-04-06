#include "main.h"

/**
* binary_to_uint - converts a binary number into an unsigned int
* @b: type const char pointer of one bit
* Return: converted number, or 0 if one or more char in str b that is not 0/1
*/

unsigned int binary_to_uint(const char *b)
{
	unsigned int num = 0;
	int i;

	if (b == NULL)
	return (0);

	for (i = 0; b[i] != '\0'; i++)
	{
		if (b[i] < '0' || b[i] > '1')
		return (0);
		num = (num << 1) + (b[i] - '0');
	}

return (num);
}
