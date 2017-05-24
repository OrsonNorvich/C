#include <stdio.h>
#include <stdlib.h>

void swap(int *a,int *b)
{
int *pa=a,*pb=b;
    int temp = *a;
    *pa = *b;
    *pb = temp;
}

int main()
{
    int x=5,y=6;
    swap(&x,&y);
    printf("%d %d",x,y);
    return 0;
}
