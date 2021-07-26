#ifndef _HOLBERTON_H_
#define _HOLBERTON_H_

/*Libraries*/
#include <stdio.h>
#include <stdarg.h>
#include <string.h>
#include <stdlib.h>
#include <unistd.h> /*write function*/

/*Prototypes*/
int _printf(const char *format, ...);


/*Structs*/
typedef struct op {
	char *op;
	char (*f)(va_list);
} op_t;

#endif
