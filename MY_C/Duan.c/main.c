#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a, b;
    scanf("%d", &a);
    b = a % 2;
    if (b == 1)
        printf("�μ�����250");
    else
        printf("�μ�����SB");
    return 0;
}
