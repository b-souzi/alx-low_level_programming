#ifndef structdog
#define structdog
/**
 * struct dog - dog type
 * @name: dog name
 * @age: age dog
 * @owner: owner of dog
 */

struct dog
{
	char *name;
	float age;
	char *owner;
};

void init_dog(struct dog *d, char *name, float age, char *owner);
#endif
