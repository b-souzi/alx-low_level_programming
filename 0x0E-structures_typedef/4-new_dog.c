#include <stdlib.h>
#include "dog.h"

/**
 * _strlen - string length
 * @str: String
 * Return: length
 */
int _strlen(char *str)
{
	int len = 0;

	while (*str++)
		len++;
	return (len);
}

/**
 * _strcpy - string copy
 * @dest: Target string
 * @src: Source string
 * Return: Pointer to target
 */
char *_strcpy(char *dest, char *src)
{
	int i = 0;

	for (i = 0; src[i]; i++)
		dest[i] = src[i];
	dest[i] = '\0';
	return (dest);
}

/**
 * new_dog - New dos function
 * @name: dog name
 * @age: dog age
 * @owner: dog owner
 * Return: pointer to new dog
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *new_lily;

	new_lily = malloc(sizeof(dog_t));
	if (new_lily == NULL)
		return (NULL);

	if (name == NULL)
		new_lily->name = NULL;
	else
	{
		new_lily->name = malloc(sizeof(char) * (_strlen(name) + 1));
		if (new_lily->name == NULL)
		{
			free(new_lily);
			return (NULL);
		}
		new_lily->name = _strcpy(new_lily->name, name);
	}

	if (owner == NULL)
		new_lily->owner = NULL;
	else
	{
		new_lily->owner = malloc(sizeof(char) * (_strlen(owner) + 1));
		if (new_lily->owner == NULL)
		{
			free(new_lily->name);
			free(new_lily);
			return (NULL);
		}
		new_lily->owner = _strcpy(new_lily->owner, owner);
	}

	new_lily->age = age;
	return (new_lily);
}
