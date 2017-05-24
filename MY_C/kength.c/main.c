#include <stdio.h>
#include <stdlib.h>

int main()
{
    int len = 0;

    printf("Enter a message: ");
    while (getchar()!= '\n'){
        len++;}

    printf("You message was %d character(s) long.\n", len);

    return 0;
}
