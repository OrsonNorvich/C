#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i, j, n, t;
    scanf("%d", &n);
    int a[n];
    for (i=0; i<n; i++)
    {
        scanf("%d", &t);

        for (j=i; j>0; j--){

            if (a[j-1]>=t)
            {
               break;
            }
            a[j]=t;
        }

    }

        for (i=0; i<n; i++)
            printf("%d", a[i]);
        return 0;
    }
