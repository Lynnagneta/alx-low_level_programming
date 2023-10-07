#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - prints the alphabet in lowercase in revesed order
 * followed by a new line
 * Return: Always 0 (Success)
 */

int main(void)
{
	int ch;

	for (ch = 'z'; ch >= 'a'; ch--)
		putchar(ch);
	{
		putchar('\n');
	}

	return (0);
}
