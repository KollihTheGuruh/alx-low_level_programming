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
	int ascii = (int)*ptr;

	if ((ascii >= 'a' && ascii <= 'm') || (ascii >= 'A' && ascii <= 'M'))
	{
	*ptr = (char)(ascii + 13);
	}
	else if ((ascii >= 'n' && ascii <= 'z') || (ascii >= 'N' && ascii <= 'Z'))
	{
	*ptr = (char)(ascii - 13);
	}
	}

	return (str);
}
