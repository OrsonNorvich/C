#include <stdio.h>
#include <stdlib.h>

int main()
{
    int m, n, i, j;
    char ch=getchar();
    scanf("%d", &n);

    for (i=0; i<n; i++){
        for (m=0; m<n-i-1; m++)
            printf(" ");
        for (j=0; j<=2*i; j++)
            printf("%c", ch);
        printf("\n");
    }
    return 0;
}
