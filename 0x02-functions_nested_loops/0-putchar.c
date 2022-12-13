#include <stdio.h>
#include <unistd.h>
#include <string.h>
/*
* function that prints _putchar
*return 0
*/
int main(void){
    unsigned int i;
    char x[] = "_putchar";
    for (i = 0; i <= strlen(x); i++)
    {
        putchar(x[i]);
    }

    putchar('\n');
    return 0;
}