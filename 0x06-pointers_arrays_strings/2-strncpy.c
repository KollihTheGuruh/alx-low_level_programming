#include "main.h"

/**
 * _strncpy - check the code
 * @src: parameter to a src to copy
 * @dest: parameter for dest
 * @n: parameter for number of bytes
 * Return: Always 0.
 */

char *_strncpy(char *dest, char *src, int n)
{
	int k = 0;
	int l = 0;

	while (k != n)
	{
		dest[l] = src[k];
		l++;
		k++;
		if (src[k] == '\0')
		{
			break;
		}
	}
	while (l != n)
		dest[l++] = '\0';
	return (dest);
}
