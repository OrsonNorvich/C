#include <stdio.h>
#include <stdlib.h>

int main()
{
    float a, b;
    scanf("%f%f", &a, &b);
    float w, x, y, z;
    w = a+b;
    x = a-b;
    y = a*b;
    z = a/b;
    printf("��=%f����=%f����=%f����=%f", w, x, y, z);
    return 0;
}
