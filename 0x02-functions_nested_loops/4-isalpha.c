#include"main.h"
/**
*_isalpha -s checks alpha characters
*
* @c : Character
* Return: 1 for alpha character, 0 otherwise
*/
int _isalpha(int c)
{
	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
