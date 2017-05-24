#include <stdio.h>
#include <stdlib.h>


void sort_number(int n,int a[])
{
    int i, j, t;


    for (j=0; j<(n-1); j++){
        for (i=0; i<(n-1-j); i++){
            if (a[i]<a[i+1]){
                t=a[i];
                a[i]=a[i+1];
                a[i+1]=t;
            }

        }
    }
    return ;
}


int main()
{
    int n, i;
    int a[200];
    int *p;

    scanf("%d", &n);
    for(i=0; i<n; i++)
        scanf("%d", &a[i]);

    sort_number(n,a);
    for (i=0; i<n; i++)
        printf("%d\t", a[i]);
    return 0;
}
