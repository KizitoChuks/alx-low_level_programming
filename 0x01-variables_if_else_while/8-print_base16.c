#include <stdio.h>
/**
 * main - prints single digit of number in base16, then a new line
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	char l;

	for (l = '0'; l <= '9'; l++)
		putchar(l);

	for (l = 'a'; l <= 'f'; l++)
		putchar(l);

	putchar('\n');
	return (0);
}
