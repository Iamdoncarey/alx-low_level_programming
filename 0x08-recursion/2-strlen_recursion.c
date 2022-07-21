#include "main.h"

/**
  * factorial - call the factorial of a number recursively.
  * @n: The integer.
  *
  * Return: length of string
  */
int _strlen_recursion(char *s);
{
	if (*s == '\0')
		return (0);
	s++;
	return (1 + _strlen_recursion(s));
}
