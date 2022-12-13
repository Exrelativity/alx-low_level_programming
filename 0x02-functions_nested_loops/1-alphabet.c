#include <stdio.h>
#include <unistd.h>
#include <string.h>
int print_alphabet();

/*
* function that prints _putchar
*return 0
*/
int print_alphabet(){
    unsigned int i;
    char x[] = "abcdefghijklmnopqrstuvwxyz";
    for (i = 0; i <= strlen(x); i++)
    {
        putchar(x[i]);
    }

    putchar('\n');
    return (0);
}

