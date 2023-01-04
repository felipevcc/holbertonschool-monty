#include "monty.h"

/**
 * _calloc - function that allocates memory for an array, using malloc
 * @nmemb: array
 * @size: size
 * Return: pointer or NULL
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{
	unsigned int index = 0;
	char *ptr = NULL;

	if (nmemb == 0 || size == 0)
		return (NULL);

	ptr = malloc(nmemb * size);

	if (ptr == NULL)
		return (NULL);

	for (; index < (nmemb * size); index++)
		ptr[index] = 0;

	return (ptr);
}

/**
 * _atoi - function converts a string to integer
 * @str: string to convert
 * Return: int
*/

int _atoi(char *str)
{
	int num = 0;
	int i = 0;

	while (str[i] && (str[i] >= '0' && str[i] <= '9'))
	{
		num = num * 10 + (str[i] - '0');
		i++;
	}

    return (num);
}

/**
 * _split - split string
 * @str: string
 * @sep: separator
 * Return: divided str
 */

char **_split(char *str, char *sep)
{
	char *aux, **split_str;
	int i = 0;

	aux = strtok(str, sep);
	split_str = (char **)_calloc(100, sizeof(char *));

	if (!split_str)
	{
		free(split_str);
		return (NULL);
	}

	while (aux)
	{
		split_str[i] = aux;
		aux = strtok(NULL, sep);
		i++;
	}
	return (split_str);
}
