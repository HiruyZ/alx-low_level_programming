#include "dog.h"
#include <stdlib.h>

int _strlen(char *str);
char *_strcopy(char *destination, char *source);
dog_t *new_dog(char *name, float age, char *owner);

/**
 * new_dog - Create new dog
 * @name: The name
 * @age: The age
 * @owner: The owner
 *
 * Return: New struct dog.
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *doggy;

	if (name == NULL || age < 0 || owner == NULL)
		return (NULL);

	doggy = malloc(sizeof(dog_t));
	if (doggy == NULL)
		return (NULL);

	doggy->name = malloc(sizeof(char) * (_strlen(name) + 1));
	if (doggy->name == NULL)
	{
		free(doggy);
		return (NULL);
	}

	doggy->owner = malloc(sizeof(char) * (_strlen(owner) + 1));
	if (doggy->owner == NULL)
	{
		free(doggy->name);
		free(doggy);
		return (NULL);
	}

	doggy->name = _strcopy(doggy->name, name);
	doggy->age = age;
	doggy->owner = _strcopy(doggy->owner, owner);

	return (doggy);
}

/**
 * _strlen - Get string length
 * @str: The string
 *
 * Return: The length
 */
int _strlen(char *str)
{
	int len = 0;

	while (*str++)
		len++;

	return (len);
}

/**
 * _strcopy - Copies string pointed to source
 * @destination: The buffer storing the string copy.
 * @source: The source string.
 *
 * Return: The pointer to destination.
 */
char *_strcopy(char *destination, char *source)
{
	int index = 0;

	for (index = 0; source[index]; index++)
		destination[index] = source[index];

	destination[index] = '\0';

	return (destination);
}
