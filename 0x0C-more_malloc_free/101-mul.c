#include "main.h"
#include <stdlib.h>
#include <stdio.h>

/**
* is_digit - Checks if a string is composed of digits.
* @str: The string to check.
*
* Return: 1 if @str is composed of digits, 0 otherwise.
*/
int is_digit(char *str)
{
int i;

for (i = 0; str[i]; i++)
{
if (str[i] < '0' || str[i] > '9')
return (0);
}

return (1);
}

/**
* _strlen - Computes the length of a string.
* @str: The string to measure.
*
* Return: The length of @str.
*/
int _strlen(char *str)
{
int i;

for (i = 0; str[i]; i++)
;

return (i);
}

/**
* _atoi - Converts a string to an integer.
* @str: The string to convert.
*
* Return: The integer value of @str.
*/
int _atoi(char *str)
{
int i, n;

n = 0;
for (i = 0; str[i]; i++)
{
if (str[i] < '0' || str[i] > '9')
return (-1);

n = n * 10 + (str[i] - '0');
}

return (n);
}

/**
* main - Multiplies two positive numbers.
* @argc: The number of arguments.
* @argv: The argument vector.
*
* Return: 0 if successful, otherwise 98.
*/
int main(int argc, char *argv[])
{
unsigned long int a, b, res;
int len_a, len_b;

if (argc != 3)
{
printf("Error\n");
return (98);
}

if (!is_digit(argv[1]) || !is_digit(argv[2]))
{
printf("Error\n");
return (98);
}

len_a = _strlen(argv[1]);
len_b = _strlen(argv[2]);
if (len_a == 0 || len_b == 0)
{
printf("Error\n");
return (98);
}

a = _atoi(argv[1]);
b = _atoi(argv[2]);

res = a *b;
printf("%lu\n", res);

return (0);
}
