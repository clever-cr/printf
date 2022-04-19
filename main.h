#ifndef _MAIN_H
#define _MAIN_H

#include <stadarg.h>
/**
*struct print - structure for printing various types
*@t: type to print
*@f: function to print
*/
typedef struct print
{
    char *t;
    int (*f)(va_list);
} print_t;

int _putchar(char c);
int _printf(const char *format, ...);
int printf_c(va_list c);
int printf_s(va_list s);
int printf_i(va_list d);
int print_u(va_list u);
int printf_b(va_list b);
int printf_o(va_list o);
int printf_x(va_list x);
int printf_X(va_list X);
int printf_p(va_list p);
int printf_S(va_list S);
int print_r(va_list r);
int print_R(va_list R);

#endif /* _MAIN_H */