#include <stdio.h>

/**
 * main - Removes infinite loop
 * Return: 0
 */

int main(void)
{
	int i;

	printf("Infinite loop incoming :(\n");

	i = 10;

	while (i < 10)
	{
		putchar(i);
		break;
	}

	printf("Infinite loop avoided! \\o/\n");
}
