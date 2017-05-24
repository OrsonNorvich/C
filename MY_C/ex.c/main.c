#include <stdio.h>
#include <stdlib.h>

int exchange(int i, int n)
{
    if(i==0)return 0;
    exchange(i/n, n);
    int k = i % n;
    if (k <= 9)printf("%d", k);
    else printf("%c", 'A' + k - 10);
    return 0;
}

int main()
{
    int num, sys;
    printf("输入转换的数字：");
    scanf("%d", &num);
    printf("输入转换的进制：");
    scanf("%d", &sys);
    printf("转换后的数字：");
    exchange(num, sys);
    printf("\n");
    return 0;
}
