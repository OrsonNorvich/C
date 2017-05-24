#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n, t, i;
    float e;
    printf("Enter a number: ");
    scanf("%d", &n);
    for(i = 1;i <= n;i++){t*=i;e+=1.0f/t; }
    printf("%f", e);
    return 0;
}
