#ifndef MAIN_H
#define MAIN_H

void *malloc_checked(unsigned int);

unsigned int _strlen(char *);

char *string_nconcat(char *, char *, unsigned int);

void *_calloc(unsigned int, unsigned int);

int *array_range(int, int);

void *_realloc(void *, unsigned int, unsigned int);

#endif
