#include <stdio.h>
#include <stdlib.h>

int main()
{
    float supline, dowline, high, area;
    scanf("%f", &supline);
    scanf("%f", &dowline);
    scanf("%f", &high);

    area = ((supline + dowline) * high) / 2;
    printf("%f \n", area);
    return 0;
}
