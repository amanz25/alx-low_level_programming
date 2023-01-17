#include <stdlib.h>
#include "dog.h"

/**
 * new_dog - add a new dog
 * @name: name of the new dog
 * @age: age of the new dog
 * @owner: owner of the new dog
 *
 * Return: pointer to the new dog structure.
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *newDog;
	int count1, count2;

	newDog = malloc(sizeof(dog_t));
	if (newDog == NULL)
		return (NULL);

	for (count1 = 0; name[count1] != '\0'; count1++)
		;
	for (count2 = 0; owner[count2] != '\0'; count2++)
		;

	newDog->name = malloc(sizeof(char) * (count1 + 1));
	if (newDog->name == NULL)
	{
		free(newDog);
		return (NULL);
	}
	newDog->owner = malloc(sizeof(char) * (count2 + 1));
	if (newDog->owner == NULL)
	{
		free(newDog);
		free(newDog->name);
		return (NULL);
	}
	_strcpy(newDog->name, name);
	_strcpy(newDog->owner, owner);
	newDog->age = age;

	return (newDog);
}

/**
 * _strcpy - copies the string pointed to by src to dest
 * @dest: pointer to the buffer in which we copy the string
 * @src: string to be copied
 *
 * Return: the pointer to dest
 */
char *_strcpy(char *dest, char *src)
{
	int len, i;

	len = 0;

	while (src[len] != '\0')
	{
		len++;
	}

	for (i = 0; i < len; i++)
	{
		dest[i] = src[i];
	}
	dest[i] = '\0';

	return (dest);
}
