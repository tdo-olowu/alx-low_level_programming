#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * main - check the code
 *
 * Return: Always 0.
 */
int main(void)
{
    char *concat;
    char *empty = NULL;
    char *fmt = "%s\n";
    char *s1; char *s2 ; char *s3 ; char *s4; char *s5; char *s6; char *s7;

    concat = string_nconcat("Best ", "School !!!", 6);
    printf("%s\n", concat);
    free(concat);

    s1 = string_nconcat("Hello ", "World", 3);
    s2 = string_nconcat("Hello", "World", 5);
    s3 = string_nconcat("Hello", "World", 10);
    s4 = string_nconcat("Hello", empty, 4);
    s5 = string_nconcat(empty, "World", 5);
    s6 = string_nconcat(empty, empty, 3);
    s7 = string_nconcat("Hello", "World", 0);

    printf(fmt, s1); printf(fmt, s2) ; printf(fmt, s3) ; printf(fmt, s4);
   printf(fmt, s5) ; printf(fmt, s6) ; printf(fmt, s7); 

    return (0);
}
