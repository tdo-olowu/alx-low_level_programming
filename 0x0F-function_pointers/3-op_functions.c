#include "function_pointers.h"

// no switch, no for or do while, no goto, no else, only one if, only one while
// return NULL if s doesn't match five operators
// only declare these two variables inside the funct.

int (*get_op_func(char *s))(int, int)
{

op_t ops[] = {
        {"+", op_add},
        {"-", op_sub},
        {"*", op_mul},
        {"/", op_div},
        {"%", op_mod},
        {NULL, NULL}
    };
    int i;
