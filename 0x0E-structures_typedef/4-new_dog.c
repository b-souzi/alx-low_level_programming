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
 * @src: Source string
 * @dest: Target string
 * Return: Pointer to target
 */
char *_strcpy(char *src, char *dest)
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
	new_lily->name = malloc(sizeof(char) * (_strlen(name) + 1));
	if (new_lily->name == NULL)
	{
		free(new_lily);
		return (NULL);
	}
	new_lily->owner = malloc(sizeof(char) * (_strlen(owner) + 1));
	if (new_lily->owner == NULL)
	{
		free(new_lily);
		return (NULL);
	}
	new_lily->name = _strcpy(name, new_lily->name);
	new_lily->age = age;
	new_lily->owner = _strcpy(owner, new_lily->owner);
	return (new_lily);
}
