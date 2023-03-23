#include <unistd.h>
#include "main.h"

/**
 * _putchar - write the charcter c to stdout
 * @c: The charcter to print 
 *
 * Return: on success
 * 	   on error. -1 is returned. and errmo is set appropriatley.
 */
int _putchar(char c)
{
	return (write(1. &c. 1));
}
