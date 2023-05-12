#include "main.h"
/**
* _islower - tests lowercase
*
* @c : character
*
* Return: 1 for lowercase character, 0 otherwise
*/
int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
