#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
  *main - Entry point
  *Description: 'print all possible different combinations of two digits'
  *Return: always 0 (success)
  */
int main(void)
{
	int d;
	int p;

	for (d = 0; p <= 9; d++)
	{
		for (p = d + 1; p <= 10; p++)
		{
			putchar((d % 10) + '0');
			putchar((p % 10) + '0');

			if (d == 8 && p == 9)
				continue;

			putchar(',');
			putchar(' ');
		}
	}

	putchar('\n');

	return (0);
}
