#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a, b;
    scanf("%d", &a);
    b = a % 2;
    if (b == 1)
        printf("¶Î¼ÑÍþÊÇ250");
    else
        printf("¶Î¼ÑÍþÊÇSB");
    return 0;
}
