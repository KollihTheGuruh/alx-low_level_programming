#include "main.h"

/**
 * string_toupper - changes all lowercase letters of a string to uppercase
 * @str: the string to modify
 *
 * Return: a pointer to the modified string
 */
char *string_toupper(char *str)
{
	char *ptr = str;

	while (*ptr != '\0')
{
	if (*ptr >= 'a' && *ptr <= 'z')
{
	*ptr -= 32;
}
	ptr++;
	}

	return (str);
}
