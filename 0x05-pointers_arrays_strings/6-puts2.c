#include "main.h"

/**
  *puts2 - prints every other character of a string
  *@str: the string to be treated
  *Return: void
  */

void puts2(char *str)
{

	int _putchar(char c);
	int longi = 0;
	int t = 0;
	int o;

	char *y = str;

	while (*y != '0')
	{
		y++;
		longi++;
	}
	t = longi - 1;
	for (o = 0; o <= t; o++)
	{
		if (o % 2 == 0)
		{
			_putchar(str[o]);
		}
	}
	_putchar('\n');
}
