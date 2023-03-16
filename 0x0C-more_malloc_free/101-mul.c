#include "main.h"
#include <stdio.h>

/**
 * _putchar - writes the character c to stdout
 * @c: The character to print
 *
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 */
void _putchar(char c)
{
    fwrite(1, &c, 1);
}

/**
 * _isdigit - checks if a character is a digit
 * @c: the character to check
 *
 * Return: 1 if c is a digit, 0 otherwise
 */
int _isdigit(char c)
{
    return (c >= '0' && c <= '9');
}

/**
 * _atoi - converts a string to an integer
 * @s: the string to convert
 *
 * Return: the integer value of the string
 */
int _atoi(char *s)
{
    int sign = 1, num = 0, i = 0;

    if (s[i] == '-')
    {
        sign = -1;
        i++;
    }
    while (s[i] != '\0')
    {
        if (_isdigit(s[i]))
        {
            num = num * 10 + (s[i] - '0');
        }
        else
        {
            break;
        }
        i++;
    }
    return sign * num;
}

/**
 * main - entry point
 * @argc: number of arguments passed to the program
 * @argv: array of strings containing the arguments
 *
 * Return: 0 on success, 1 on error
 */
int main(int argc, char *argv[])
{
    int num1, num2, result;

    if (argc != 3)
    {
        _putchar('E');
        _putchar('r');
        _putchar('r');
        _putchar('o');
        _putchar('r');
        _putchar('\n');
        return (1);
    }

    num1 = _atoi(argv[1]);
    num2 = _atoi(argv[2]);

    result = num1 * num2;

    printf("%d\n", result);

    return (0);
}
