#include "main.h"

/**
 * get_endianness - checks the endianness
 *
 * Return: 0 if big endian or 1 if little endian
*/

int get_endianness(void)
{
unsigned int value;
char *byte;

value = 1;
byte = (char *)&value;

return ((int)*byte);
}
