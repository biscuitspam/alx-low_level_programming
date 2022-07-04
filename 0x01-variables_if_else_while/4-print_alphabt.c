#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int c;

	for (c = 97; c <= (97 + 25); c++)
		putchar(c);
	{
		if (c == 101 || c == 113)
			continue;

		putchar(c);
	}
  
  printf("\n");
    
	return (0);
}
