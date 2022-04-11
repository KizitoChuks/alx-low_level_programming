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
		printf("%d", l);
	printf("\n");
	return (0);
}
