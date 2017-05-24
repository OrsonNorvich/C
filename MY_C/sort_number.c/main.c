#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n, i;
    scanf("%d", &n);

    for (i=0; i<n; i++)
        printf("%d\t", sort_number());
    return 0;
}
int sort_number(int n)
{
    int i, j, t;

    int a[n];
    for(i=0; i<n; i++)
        scanf("%d", &a[i]);
    for (j=0; j<(n-1); j++){
        for (i=0; i<(n-1-j); i++){
            if (a[i]<a[i+1]){
                t=a[i];
                a[i]=a[i+1];
                a[i+1]=t;
            }

        }
    }
    return a[i];
}
