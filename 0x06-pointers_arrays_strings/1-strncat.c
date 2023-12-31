#include "main.h"

/**
  *_strncat - joins two strings using at most
  *
  *an input number of bytes from src
  *
  *@dest: the string to be added upon
  *
  *@src: the string to be attached to dest
  *
  *@n: the maximum number of bytes
  *
  *Return: a pointer to the resulting string dest
  */

char *_strncat(char *dest, char *src, int n)
{
	int index = 0;
	int dest_len = 0;

	while (dest[index++])
	{
		dest_len++;
	}
	for (index = 0; src[index] && index < n; index++)
	{
		dest[dest_len++] = src[index];
	}
	return (dest);
}
