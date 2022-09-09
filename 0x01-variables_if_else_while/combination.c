#include <stdio.h>

/**
 * main - This function prints out a to z except q and e.
 * Return: 0
 */
int main(void)
{
	char n;

	for (n = '0'; n <= '9'; n++)
	{
		for (char a = '0'; a <= '9'; a++)
		{
		putchar(n);
		putchar(a);
		putchar(',');
		}
	}
	putchar('\n');
	return (0);
}
