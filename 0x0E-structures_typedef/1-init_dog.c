#include <stdio.h>
#include <string.h>

// Define the struct dog
struct dog {
    char name[50];
    float age;
    char owner[50];
};

// Function to initialize a struct dog
void init_dog(struct dog *d, char *name, float age, char *owner) {
    if (d != NULL) {
        // Copy the provided values into the struct members
        strncpy(d->name, name, sizeof(d->name));
        d->name[sizeof(d->name) - 1] = '\0'; // Ensure null-terminated string
        d->age = age;
        strncpy(d->owner, owner, sizeof(d->owner));
        d->owner[sizeof(d->owner) - 1] = '\0'; // Ensure null-terminated string
    }
}
