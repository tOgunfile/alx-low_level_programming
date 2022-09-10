#include <stdio.h>

/**
 * main - This function prints out a to z except q and e.
 * Return: 0
 */
int main(void)
{
	int n;
	int a;
	int t;

	for (n = '0'; n <= '7'; n++)
	{
		for (a = '0'; a <= '8'; a++)
		{
			for (t = '0'; t <= '9'; t++)
			{
				if (n < a && a < t)
				{
					putchar(n);
					putchar(a);
					putchar(t);
					if (!(n == '7' && a == '8' && t == '9'))
					{
						putchar(',');
						putchar(' ');
					}
				}
			}
		}
	}
	putchar('\n');
	return (0);
}
