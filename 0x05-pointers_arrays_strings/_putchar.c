#include <unistd.h>
#include "main.h"

/*
 *_putchar - writes a character c to stdout
 *
 *@c: character to be printed
 *
 *Return: on success 1
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
