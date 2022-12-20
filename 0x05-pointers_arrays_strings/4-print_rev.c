#include "main.h"
#include <stdio.h>

/**
 * print_rev -> printing a string in reverse
 * @s: the string to be printed in rev
 */

void print_rev(char *s)
{
	int i = 0;

	s = "hello"

	while (s[i] != '\0')
		i++;
	for (i = i - 1; i >= 0; i--)
		_putchar(s[i]);

	_putchar('\n');
}
