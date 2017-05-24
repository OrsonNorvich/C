#include <stdio.h>
#include <stdlib.h>

void swap(int a,int b)
{
    int temp = a;
    a = b;
    b = temp;
}
int main()
{
    int x=5,y=6;
    swap(x,y);
    printf(¡°%d %d¡±,x,y);
}
