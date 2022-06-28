#include "main.h"
#include <stdlib.h>
/**
 * *_strdup - function returns a pointer to a new string
 * @str: char to be initialized with
 * Return: pointer to array or null
 **/

char *_strdup(char *str)
{
	char *strDup;
	int i, j;

	if (str == NULL)
		return (NULL);
	
	for (i = 0; str[i] != '\0'; i++)
	{
		strDup = malloc(sizeof (*str) * i);
	}
	if (strDup == NULL)
		return (NULL);
	for (j = 0; str[j] != '\0'; j++)
	{
		strDup[j] = str[j];
	}
	return (strDup);
}