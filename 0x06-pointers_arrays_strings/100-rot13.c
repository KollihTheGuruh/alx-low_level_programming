#include "main.h"

/**
 * rot13 - encodes a string using rot13
 * @str: the string to encode
 *
 * Return: a pointer to the encoded string
 */

char *rot13(char *str)
{
	char *ptr = str;

	for (; *ptr != '\0'; ptr++)
	{
	int ascii_val = (int)*ptr;

	if ((ascii_val >= 'a' && ascii_val <= 'm') || (ascii_val >= 'A' && ascii_val <= 'M'))
	{
	*ptr = (char)(ascii_val + 13);
	}
	else if ((ascii_val >= 'n' && ascii_val <= 'z') || (ascii_val >= 'N' && ascii_val <= 'Z'))
	{
	*ptr = (char)(ascii_val - 13);
	}
	}

	return (str);
}
