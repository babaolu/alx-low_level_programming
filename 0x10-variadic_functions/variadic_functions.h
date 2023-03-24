#ifndef VARIADIC_FUNCTIONS_H
#define VARIADIC_FUNCTIONS_H

#include <unistd.h>
#include <stdarg.h>
#include <stdlib.h>
#include <stdio.h>

int _putchar(char);

int sum_them_all(const unsigned int, ...);

void print_int(int);

void print_str(const char *);

int _pow(int, int);

void print_numbers(const char *, const unsigned int, ...);

void print_strings(const char *, const unsigned int, ...);

void print_all(const char * const format, ...);

#endif /* VARIADIC_FUNCTIONS_H */
