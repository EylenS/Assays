#ifndef _HOLBERTON_H_
#define _HOLBERTON_H_

/*Libraries*/
#include <stdio.h>
#include <stdarg.h>
#include <unistd.h>
#include <string.h>
#include <stdlib.h>
#include "holberton.h"

/*Structs*/
/**
 * struct op -Groups elements of possibly != types into a single type
 * @op: directives (example: %s, %d, %c, etc)
 * @f: The function associated with op. Function pointer.
 *
 * The pointer points to the function according to the op passed
 */
typedef struct op
{
	char op;
	int (*f)(va_list);
} op_t;

/*Prototypes*/
int _printf(const char *format, ...);
int pr_char(va_list arg);
int pr_string(va_list arg);
int pr_perc(va_list arg);
int pr_di(va_list arg);
int pr_ui(va_list arg);
int pr_o(va_list arg);
int pr_x(va_list arg);
int pr_X(va_list arg);

#endif
