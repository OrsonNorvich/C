#include <stdio.h>
#include <stdlib.h>

int main()
{
    float a;
    scanf("%.1f", &a);
    if (a <= 60.0)
        printf("Pass\n");
    else
        printf("Fail\n");
    return 0;
}
