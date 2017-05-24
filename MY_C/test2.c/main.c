#include <stdio.h>
#include <stdlib.h>

void find_max_min(const int *pa, int n, int *plargest, int *psmallest);

int main()
{
    int a[10], largest=0, smallest=0, i;
    for(i=0; i<sizeof(a) / sizeof(a[0]); i++)
    {
        scanf("%d", &a[i]);
    }
    find_max_min(a, sizeof(a)/sizeof(a[0]), &largest, &smallest);
    printf("Largest: %d, Smallest: %d\n", largest, smallest);
    return 0;
}

void find_max_min(const int *pa, int n, int *plargest, int *psmallest)
{
    int i;

    *plargest = pa[0];
    *psmallest = pa[0];

    for(i=0; i<n; i++)
    {
        if (pa[i]>*plargest)
            *plargest = pa[i];
        if (pa[i]<*psmallest)
            *psmallest = pa[i];
    }
}
