#include <stdio.h>
#include <stdlib.h>


int main()
{

    int n, i, p;
    scanf("%d", &n);
    int a[n];

    for (i=0; i<n; i++)
    {
        scanf("%d", &a[i]);
    }

    for (p=0;p<n;p++) printf("%d", sortnumber(a, n));
    return 0;
}

int sortnumber(int a[], int n)
{
    int i, j, k, temp;
    for(i=0; i<n; i++)
    {
        k=i;
        temp = a[i];
        for(j=i+1; j<n; j++)
        {
            if (a[j]>temp)
            {
                k=j;
                temp=a[j];
            }
        }
        if (i!=k)
        {
            temp=a[i];
            a[i]=a[k];
            a[k]=temp;
        }

    }

    return a;
}


