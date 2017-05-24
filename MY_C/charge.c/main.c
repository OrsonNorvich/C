#include <stdio.h>
#include <stdlib.h>

#define MAX 9

int parvalue[MAX]={10000, 5000,1000,500,100,50,10};
int num[MAX]={0};

int exchange(int n)
{
    int i, j;
    for(i=0; i<MAX; i++)
        if(n>=parvalue[i]) break;//找到比N小的最大面额
    while(n>0 && i<MAX)
    {
        if(n>=parvalue[i])
        {
            n-=parvalue[i];
            num[i]++;
        }else if(n<10 && n>=5)
        {
            num[MAX-1]++;
            break;
        }else i++;
    }
    return 0;
}

int main()
{
    int i;
    float m;
    printf("输入金额：");
    scanf("%f", &m);
    exchange((int)100*m);
    printf("\n%.2f元零钱组成：\n", m);
    for(i=0; i<MAX; i++)
        if(num[i]>0)
           printf("%6.2f: %d张\n", (float)parvalue[i]/100.0, num[i]);
    return 0;
}
