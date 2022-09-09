#include <stdio.h>

/**
 * main - This function prints out a to z except q and e.
 * Return: 0
 */
int main(void)
{
	char n;

	for (n = 'a'; n <= 'z'; n++)
	{
		if (!(n == 'q' || n == 'e'))
		{
		putchar(n);
		}
	}
	putchar('\n');
	return (0);
}
