#include <stdio.h>
#include <stdlib.h>

int main()
{
    int *p, i;
    i=5;
    p=&i;
    int *j;
    j=&*p;
    printf("%d", *j);
    printf("%d", *p);
    return 0;
}
