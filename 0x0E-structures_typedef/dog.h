#ifndef structdog
#define structdog
/**
 * struct dog - dog type
 * @name: dog name
 * @age: age dog
 * @owner: owner of dog
 */

typedef struct dog
{
	char *name;
	float age;
	char *owner;
} dog_t;

void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
#endif
