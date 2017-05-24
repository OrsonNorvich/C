#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i, n, sum=0;
    scanf("%d", &n);

    if(n<=10000&&n>0)
    {
        for(i=0; i*i<=n; i++)
    {
        if(i%2!=0)
        {
            sum+=i*i;
        }
    }
    printf("sum=%d", sum);
    }
    else {printf("invalid number\n");
    }
    return 0;
}
