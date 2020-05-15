#include "header.h"

/**
 * delim_checker - check whitespaces
 * @str: string for check
 *
 * Return: void
 */
void delim(char *str)
{
	int index, i;

	index = 0;
	while (str[index] == ' ' || str[index] == '\t' || str[index] == '\n')
	{
		index++;
	}
	if (index != 0)
	{
		i = 0;
		while (str[i + index] != '\0')
		{
			str[i] = str[i + index];
			i++;
		}
		str[i] = '\0';
	}
}
