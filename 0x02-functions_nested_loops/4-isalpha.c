#include "main.h"
/**
 * _isalpha - checks for alphabet
 * @c: the character to check
 * Return: 1 for alphabet character 0 for anything else
 */
int _isalpha(int c)
{
	if ((c >= 65 && c <= 90) || (c >= 97 && c <= 122))
	{
	return (1);
	}
	return (0);
}
