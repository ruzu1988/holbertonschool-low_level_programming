#include <stdarg.h>
#ifndef VARIADIC_FUNCTIONS_H
#define VARIADIC_FUNCTIONS_H
typedef struct types {
  char z;
  void (*f)(va_list args);
} types_t;
void print_string(va_list argumentos);
void print_float(va_list argumentos);
void print_integer(va_list argumentos);
void print_char(va_list argumentos);
int sum_them_all(const unsigned int n, ...);
void print_numbers(const char *separator, const unsigned int n, ...);
void print_strings(const char *separator, const unsigned int n, ...);
void print_all(const char * const format, ...);
#endif /* VARIADIC_FUNCTIONS_H */