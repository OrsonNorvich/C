#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    int d, i1, i2, i3, i4, i5, j1, j2, j3, j4, j5;
    int First_sum, Second_sum, total;
    printf("Enter the first digits of a UPC: ");
    scanf("%1d%1d%1d%1d%1d%1d%1d%1d%1d%1d%1d", &d, &i1, &i2, &i3, &i4, &i5, &j1, &j2, &j3, &j4, &j5);
    First_sum = d + i2 + i4 + j1 + j3 + j5;
    Second_sum = i1+ i3 + i5 + j2 + j4;
    total = 3 * First_sum + Second_sum;
    printf("Check digits: %d\n", 9 - (total - 1)%10);
        return 0;
}
