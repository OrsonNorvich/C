#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a, b;
    int sum1 = 0, num1 = 0, sum2 = 0, num2 = 0;
    scanf("%d", &a);
    while (a != 0)
    {
        b = a % 2;
        if (b == 1)
        {
            sum1 += a;
            num1 += 1;
        }
        else
        {
            sum2 += a;
            num2 += 1;
        }
        scanf("%d", &a);
    }
    printf("%10d%10d\n%10d%10d", sum1, sum2, num1, num2);
    return 0;
}
