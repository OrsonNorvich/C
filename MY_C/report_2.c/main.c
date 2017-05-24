#include <stdio.h>
#include <stdlib.h>
#define N 9

int main()
{
    int a[N],n;
    int i,min_idx,max_idx,temp;

    printf("请输入数组中元素个数\n");
    scanf("%d",&n);

    for(i=0; i<n; i++)
        scanf("%d",&a[i]);

    for(i=0; i<n; i++)
    {
        if(a[i]>a[max_idx])
            max_idx=i;
        if(a[i]<a[min_idx])
            min_idx=i;
    }
    if(max_idx!=0)
    {
        temp = a[max_idx];
        a[max_idx]=a[0];
        a[0] = temp;
    }
    if(min_idx!=(N-1))
    {
        temp = a[min_idx];
        a[min_idx] = a[N-1];
        a[N-1] = temp;
    }
    for(i=0; i<N-1; i++)
        printf("%d",a[i]);

    printf("%d\n",a[i]);

    return 0;
}
