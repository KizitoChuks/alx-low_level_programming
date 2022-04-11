#include <stdio.h>
/**
 * main - prints possible combinations of single nos of base10, then a new line
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int l;

	for (l = 0; l <= 9; l++)
	{
		putchar(l + '0');
		if (l < 9)
		{
			putchar(',');
			putchar(' ');
		}
	}
	putchar('\n');
	return (0);
}
