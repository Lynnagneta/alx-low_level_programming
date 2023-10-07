#include <stdio.h>

/**
 * main - prints all possible combinations of single-digit numbers
 *
 * followed by a new line
 * Return: Always 0 (Success)
 */
int main(void)
{
	int n;

	for (n = 48; n <= 57; n++)
	{
		putchar(n);
		putchar(',');
		putchar(' ');
	}
		putchar('\n');

	return (0);
}
