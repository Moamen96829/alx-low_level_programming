#include "main.h"

/**
* _isupper - chexk i c is upper
* @c: input for alphabet 
* Return: 1 if its upper. 0 i not 
*/

int _isupper(int c)
{
	if (c >= 65 && c <= 90)
		return (1);
	else
		return (0);
}
