#include <stdio.h>
#include <stdlib.h>

int main()
{
    int x=1;

    while (((x%2)!=1)||((x%3)!=2)||((x%5)!=4)||((x%6)!=5)||((x%7)!=0)){
        x++;

    }
    printf("%d\n", x);


    return 0;
}
