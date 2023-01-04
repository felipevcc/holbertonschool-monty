#include "monty.h"

/**
 * _atoi - function converts a string to integer
 * @buff: variable char global
 * Return: int
*/

int _atoi(void)
{
	int num = 0;
	int i = 0;

	while (buff[i] && (buff[i] >= '0' && buff[i] <= '9'))
	{
		num = num * 10 + (buff[i] - '0');
		i++;
	}

    return (num);
}