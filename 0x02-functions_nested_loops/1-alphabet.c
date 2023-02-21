#include "main.h"

/**
 * main - Entry point
 * description: a programme prints alphabets in lowercase
 * Return: Always 0 (success)
 */

int main(void)
{
	char alp;

	for (alp = 'a'; alp <= 'z'; alp++)
	{
	putchar(alp);
}
	putchar('\n');
}
