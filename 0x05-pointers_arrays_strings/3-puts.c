#include "main.h"

/**
  *_puts - prints a string
  *@str: the string
  *Returns: void
  */

void _puts(char *str)
{

	int _putchar(char c);

	while (*str != '\0')
	{
		_putchar(*str++);
	}
	_putchar('\n');
}
