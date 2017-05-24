#include <stdio.h>
#include <stdlib.h>

int judge(int n);

int main()
{
    int n;
    scanf("%d", &n);
    if(n<2||n>10000) return 0;
    judge(n);
    if(judge(n)==1) printf("No\n");
    else printf("Yes\n");
    return 0;
}

int judge(int n)
{
    int i, j;
    for(i=2; i<(n/2); i++)
    {
        if(n%i==0)
        {
            j = 1;
            break;
        }
        else j = 0;
    }
    return j;
}
