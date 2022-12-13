#include "1-alphabet.c"
#include <stdio.h>
#include <unistd.h>
#include <string.h>

/*
* function that prints _alphabets
*return 0
*/
int print_alphabet_x10()
 {
    int i;
    for (i=0; i <= 10; i++)
    {
        print_alphabet();
    }
    putchar('\n');
    return (0);
}