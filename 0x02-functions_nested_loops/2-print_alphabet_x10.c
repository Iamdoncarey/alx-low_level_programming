#include "main.h"

/**
 * print_alphabet_x10 - print alphabets 10 times.
 */
void print_alphabet_x10(void)

{

	int i = 0;

	while (i <= 9)

	{

		int c = 'a';

		while (c <= 'z')

		{

			_putchar(c);

			c++;

		}

		_putchar('\n');

		i++;

	}

}
