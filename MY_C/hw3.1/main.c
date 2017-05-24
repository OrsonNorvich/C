#include <stdio.h>
#include <stdlib.h>

int main()
{
    int m=0, n, i=0, j=0, a=0, b=0, number, q;
    scanf("%d", &n);
    for (m=0;m<n;m++){

        scanf("%d", &number);
        q=number%2;
        if (q==0){
            i=i+1;
            a=a+number;}
        else{
            j=j+1;
            b=b+number;
        }
        }
    printf("%d/n%d/n%d/n%d/n", j, b, a, i);
    return 0;
}
