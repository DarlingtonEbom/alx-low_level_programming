#include "main.h"

/**
 * get_endianness - Checks the endianness of the machine.
 * Return: 0 for big, 1 for little.
 */
int get_endianness(void)
{
	unsigned int i = 1;
	char *c = (char *) &i;

	return (*c);
}
