#inlude <stdio.h>
/**
 * main - a program that prints all possible different combinations of two digits.
 * Return: 0
 */

int main(void) {
    int i, j;

    for (i = 0; i <= 8; i++) {
        for (j = i+1; j <= 9; j++) {
            putchar('0' + i);
            putchar('0' + j);
            if (i < 8) {
                putchar(',');
                putchar(' ');
            }
        }
    }

    return 0;
}
