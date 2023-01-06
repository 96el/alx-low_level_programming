#include <stdio.h>
#include "main.h"
/**
 * _putchar - write the character c to stdout
 * @c: their character to print
 * return: on success 1.
 * on error, -1 is returned and error is set apperoximatly.
 */
int _putchar(char c)
{
	return(write(1, &c, 1));
}
