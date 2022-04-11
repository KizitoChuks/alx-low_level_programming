#include <stdio.h>
/**
 * main - prints single digit of number in base 10, then a new line
 *
 * Return: Always 0 (Success)
 */
int main(void)

{
	int l;

	for (l = 0; l <= 9; l++)
		putchar(l + '0');
	putchar('\n');
	return (0);
}
