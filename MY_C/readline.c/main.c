#include <stdio.h>
#include <stdlib.h>
#include "readline.h"

int readline(char str[], int n)
{
    int ch, i=0;

    while (isspace(ch =getchar()))
        ;
    while (ch != '\n' && ch != BOF){
        if (i < n)
            str[i++] = ch;
        ch =getchar();
    }
    str[i] = '\0';
    return i;
}

